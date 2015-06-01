#include "stdafx.h"
#include <std::map>
#include <iostream>
#include <stdio.h>
#include <std::string.h>
#include <std::string>
#include <std::vector>
#include <cmath>
#include <math.h>    
#include <algorithm>
#include <stdlib.h> 
#include <fstream>
#include <sstream>
#include <iterator>
#include <ctime>
#include <time.h>
#include "Semafor.h"
#include <windows.h>
using namespace std;


class Server{
public:
template <typename T1, typename T2>
struct less_second {
	typedef pair<T1, T2> type;
	bool operator ()(type const& a, type const& b) const {
		return a.second < b.second;
	}
};
std::map<int, std::map<std::string, double>> getBase();
double sim_distance(std::map <int, std::map<std::string, double>> prefs, int person1, int person2);
double sim_pearson(std::map <int, std::map<std::string, double>> prefs, int person1, int person2);
std::map<int, std::map<std::string, double>> topMatches(std::map <int, std::map<std::string, double>> prefs, int person);
std::map <std::string, double> getRecommendations(std::map <int, std::map<std::string, double>> prefs, int person);
void execute();



};

std::map<int, std::map<std::string, double>> Server::getBase()
{
	clock_t t1 = clock();
	int counter = 1;
	size_t pos;
	std::string delimiter = "	";
	int current = 1;
	std::string line;
	std::vector<std::string> tokens;
	std::ifstream myfile("u2.base");
	std::string token;

	std::map<std::string, double> base;
	std::map<int, std::map<std::string, double>> finals;
	
	while (!myfile.eof())
	{
		getline(myfile, line);
		while ((pos = line.find(delimiter)) != std::string::npos) {
			token = line.substr(0, pos);
			tokens.push_back(token);
			line.erase(0, pos + delimiter.length());

		}

		while (std::stoi(tokens[0]) == current && (!myfile.eof()))
		{
			base.insert(std::pair<std::string, double>(tokens[1], std::stod(tokens[2])));

			tokens.clear();
	
			getline(myfile, line);

			while ((pos = line.find(delimiter)) != std::string::npos) {
				token = line.substr(0, pos);
				tokens.push_back(token);
				line.erase(0, pos + delimiter.length());
			}
			if (std::stoi(tokens[0]) != current)
			{

				finals.emplace(current, base);
				base.clear();
				base.insert(std::pair<std::string, double>(tokens[1], std::stod(tokens[2])));
				current=std::stoi(tokens[0]);
				break;
			}

		}
	}
	myfile.close();
	base.insert(std::pair<std::string, double>(tokens[1], std::stod(tokens[2])));
	finals.emplace(std::stoi(tokens[0]), base);
	base.clear();
	
	clock_t t2 = clock();
	std::cout << "Time generate base: " << (double)(t2 - t1) / (double)CLOCKS_PER_SEC << '\n';
	return finals;
}
double Server::sim_distance(std::map <int, std::map<std::string, double>> prefs, int person1, int person2) {
	static int count = 1;
	std::vector<std::string> si;
	double sum = 0.0;
	for (auto item = prefs[person1].begin(); item != prefs[person1].end(); ++item)
	{
		for (auto item2 = prefs[person2].begin(); item2 != prefs[person2].end(); ++item2)
		{
			if (item2->first.compare(item->first) == 0)
			{
				si.push_back(item2->first);
				sum += pow(item->second - item2->second, 2);
				break;
			}
		}
	}
	if (si.size() <= 2){
		return 0;
	}
	return 1 / sqrt((1 + sum));
}

double Server::sim_pearson(std::map <int, std::map<std::string, double>> prefs, int person1, int person2) {
	std::vector<std::string> si;
	int count = 0;
	double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0, sum4 = 0.0, PirsSum = 0.0;
	for (auto item = prefs[person1].begin(); item != prefs[person1].end(); ++item)
	{
		for (auto item2 = prefs[person2].begin(); item2 != prefs[person2].end(); ++item2)
		{
			if (item2->first.compare(item->first) == 0)
			{
				si.push_back(item2->first);
				sum1 += item->second;
				sum2 += item2->second;

				sum3 += pow(item->second, 2);
				sum4 += pow(item2->second, 2);

				PirsSum += item->second *item2->second;
				count += 1;
				break;
			}
		}
	}
	if (si.size() <= 4) {
		return 0;
	}
	double nx = count*PirsSum - sum1*sum2;
	double ny = (count*sum3 - pow(sum1, 2))*(count*sum4 - pow(sum2, 2));
	double sny = sqrt(ny);
	if (sny == 0)
		return 0;

	return nx / sny;
}


std::map<int, std::map<std::string, double>> Server::topMatches(std::map <int, std::map<std::string, double>> prefs, int person){
    std::vector<std::pair<int, double>> revenue;
	int recomendators = 0;
	clock_t t1 = clock();

	
	for (auto i = prefs.begin(); i != prefs.end(); ++i)
	{
		double x = sim_distance(prefs, person, i->first);
		if (x != 0.0){
			revenue.push_back(std::make_pair(i->first, x));
			recomendators++;
		}
		if (recomendators >= 7) break;
	}

	sort(revenue.begin(), revenue.end(), less_second<double, double>());
	
	std::map <int, std::map<std::string, double>> returnable;
	std::map<std::string, double> near;
	
	for (auto i = revenue.begin(); i != revenue.end(); ++i)
	{
		for (auto y = prefs[i->first].begin(); y != prefs[i->first].end(); ++y)
		{
			near.emplace(y->first, y->second);
		}
		returnable.emplace(i->first, near);
		near.clear();
	}
	for (auto i = prefs[person].begin(); i != prefs[person].end(); ++i)
	{
		near.insert(std::pair<std::string, double>(i->first, i->second));
	}
	returnable.emplace(person, near);
	near.clear();
	
	return returnable;
}
std::map <std::string, double> Server::getRecommendations(std::map <int, std::map<std::string, double>> prefs, int person)
{
	int counter = 0;
	bool flag = false;
	std::map <std::string, double> totals, simSums, rankings;
	clock_t t1 = clock();

	for (auto i = prefs.begin(); i != prefs.end(); ++i)
	{
		double sim = sim_distance(prefs, person, i->first);
		for (auto y = i->second.begin(); y != i->second.end(); ++y)
		{
			auto item = prefs[person].find(y->first);
			if (item == prefs[person].end() && y->second >= 4.0)
			{
				if (totals.find(y->first) == totals.end())
				{
					totals.emplace(y->first, 0.0);
					simSums.emplace(y->first, 0.0);
					counter += 1;
					if (counter >= 10)
						flag = true;
					}
				totals[y->first] += y->second * sim;
				simSums[y->first] += sim;
				if (flag == true)
					break;
			}
		}
		if (flag == true)
			break;
	}
	for (auto z = totals.begin(); z != totals.end(); ++z)

	{
		rankings.emplace(z->first, z->second / simSums[z->first]);
	}
    std::vector<std::pair<std::string, double>> revenue;
	for (auto it = rankings.begin(); it != rankings.end(); ++it)
	{
		revenue.push_back(std::make_pair(it->first, it->second));
	}
	sort(revenue.begin(), revenue.end(), less_second<std::string, double>());
	reverse(revenue.begin(), revenue.end());
	rankings.clear();

	std::ofstream myfile("example1.txt");
	for (auto i = revenue.begin(); i != revenue.end(); ++i)
	{
		if (i != --revenue.end())
			myfile << i->first << "	" << i->second << "	" << std::endl;
		else
			myfile << i->first << "	" << i->second << "	";
		cout << i->second << endl;
		cout << i->first << endl;
	}

	myfile.close();
	for (auto i = revenue.begin(); i != revenue.end(); ++i)
	{
		rankings.emplace(i->first, i->second);
	}
	return rankings;
}

void Server::execute()
{
	std::map<int, std::map<std::string, double>> base = getBase();
	std::ofstream basefile("u2.base", ios_base::app);
	std::map<std::string, double> temp;
	size_t pos;
	std::string delimiter = "	";
	std::string line;
	std::vector<std::string> tokens;
	std::ifstream myfile("example.txt");
	std::string token;
	int UserId;
	while (std::getline(myfile, line)){
		basefile <<"\n"<< line;
		tokens.clear();
		while ((pos = line.find(delimiter)) != std::string::npos) {
			token = line.substr(0, pos);
			tokens.push_back(token);
			line.erase(0, pos + delimiter.length());
		}
		UserId = std::stoi(tokens[0]);
		temp.insert(std::pair<std::string, double>(tokens[1], std::stoi(tokens[2])));
		std::cout << tokens[1] << "	" << tokens[2] << "	" << std::endl;
	}
	
	base.insert(std::pair<int, std::map<std::string,double>>(std::stoi(tokens[0]), temp));
	temp.clear();
	myfile.close();
	basefile.close();
	System::Threading::Mutex^ m = gcnew System::Threading::Mutex(false, "MyMutex");
	while (1){
		if (m->WaitOne(0))
		{
			m->ReleaseMutex();
			Sleep(3000);
		}
		else
		{
			m->WaitOne();
			getRecommendations(topMatches(base, UserId), UserId);
			m->ReleaseMutex();
			Sleep(5000);
		}
}
}
int main()
{	

    Server *ConcreteServer=new Server();
	ConcreteServer->execute();
	return 0;
}