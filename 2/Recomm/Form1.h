#pragma once
#include <map>
#include <stdlib.h>     /* srand, rand */
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <cmath>
#include <math.h>    
#include <algorithm>
#include <stdlib.h> 
#include <fstream>
#include <sstream>
#include <iterator>
#include <ctime>
#include <time.h>
#include <msclr\marshal_cppstd.h>
#include "md5.h"
 #include <windows.h>
namespace Recomm {
	int UserId=500;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	class Handler{
	public:
		int is_user_exists(std::string check){
			std::ifstream infile(check);
			if (infile.good())
			{
				infile.close();
				return 1;
			}
			infile.close();
			return 0;

		}
		 void createuser(std::string check,std::string pass){
			 srand (time(NULL));
			 UserId=rand() % 31000 +1000;
			 std::ofstream myfile(check);
			  myfile<<md5(pass)<<"\n";
			  myfile<<UserId<<"\n";
			 myfile.close();
		 }
		 void putrec(std::string one,
			std::string two,
			std::string three,
			std::string four,
			std::string five,
			std::string six,
			std::string seven,
			std::string eight,
			std::string nine,
			std::string ten,
			std::string eleven,
			std::string twelve,
			std::string thirteen,
			std::string fourteen,
			std::string fifteen,
			std::string sixteen,
			std::string seventeen,
			std::string eighteen,
			std::string nineteen,
			std::string twenty){
			std::ofstream myfile;
			 myfile.open ("example.txt");
			 std::string buffer = one;
			 std::string buffer2 = two;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer =three;
			 buffer2 =four;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer =  five;
			 buffer2 = six;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = seven;
			 buffer2 = eight;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = nine;
			 buffer2 = ten;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = eleven;
			 buffer2 = twelve;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = thirteen;
			 buffer2 = fourteen;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = fifteen;
			 buffer2 = sixteen;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = seventeen;
			 buffer2 = eighteen;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	"<< std::endl ;
			 buffer = nineteen;
			 buffer2 = twenty;
			 myfile <<UserId<<"	"<<buffer<<"	"<<buffer2<<"	";
			 myfile.close();
		 }
	};

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  GetRec;
	protected: 




	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;












	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GetRec = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// GetRec
			// 
			this->GetRec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->GetRec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->GetRec->Location = System::Drawing::Point(173, 420);
			this->GetRec->Name = L"GetRec";
			this->GetRec->Size = System::Drawing::Size(342, 40);
			this->GetRec->TabIndex = 1;
			this->GetRec->Text = L"GET RECOMENDATIONS";
			this->GetRec->UseVisualStyleBackColor = false;
			this->GetRec->Visible = false;
			this->GetRec->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox1->Location = System::Drawing::Point(389, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"1";
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox2->Location = System::Drawing::Point(389, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(147, 21);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->Text = L"1";
			this->comboBox2->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox3->Location = System::Drawing::Point(389, 110);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(147, 21);
			this->comboBox3->TabIndex = 6;
			this->comboBox3->Text = L"1";
			this->comboBox3->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox4->Location = System::Drawing::Point(389, 137);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(147, 21);
			this->comboBox4->TabIndex = 7;
			this->comboBox4->Text = L"1";
			this->comboBox4->Visible = false;
			// 
			// comboBox5
			// 
			this->comboBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox5->Location = System::Drawing::Point(389, 164);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(147, 21);
			this->comboBox5->TabIndex = 8;
			this->comboBox5->Text = L"1";
			this->comboBox5->Visible = false;
			// 
			// comboBox6
			// 
			this->comboBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox6->Location = System::Drawing::Point(389, 191);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(147, 21);
			this->comboBox6->TabIndex = 9;
			this->comboBox6->Text = L"1";
			this->comboBox6->Visible = false;
			// 
			// comboBox7
			// 
			this->comboBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox7->Location = System::Drawing::Point(389, 218);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(147, 21);
			this->comboBox7->TabIndex = 10;
			this->comboBox7->Text = L"1";
			this->comboBox7->Visible = false;
			// 
			// comboBox8
			// 
			this->comboBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox8->Location = System::Drawing::Point(389, 245);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(147, 21);
			this->comboBox8->TabIndex = 11;
			this->comboBox8->Text = L"1";
			this->comboBox8->Visible = false;
			// 
			// comboBox9
			// 
			this->comboBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox9->Location = System::Drawing::Point(389, 272);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(147, 21);
			this->comboBox9->TabIndex = 12;
			this->comboBox9->Text = L"1";
			this->comboBox9->Visible = false;
			// 
			// comboBox10
			// 
			this->comboBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"5"});
			this->comboBox10->Location = System::Drawing::Point(389, 299);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(147, 21);
			this->comboBox10->TabIndex = 13;
			this->comboBox10->Text = L"1";
			this->comboBox10->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(21, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(333, 26);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(21, 109);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(333, 26);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"8";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(21, 136);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(333, 26);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"9";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(21, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(333, 26);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"11";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox10->ForeColor = System::Drawing::Color::Black;
			this->textBox10->Location = System::Drawing::Point(21, 299);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(333, 26);
			this->textBox10->TabIndex = 21;
			this->textBox10->Text = L"100";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::Color::Black;
			this->textBox9->Location = System::Drawing::Point(21, 272);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(333, 26);
			this->textBox9->TabIndex = 22;
			this->textBox9->Text = L"81";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox8->ForeColor = System::Drawing::Color::Black;
			this->textBox8->Location = System::Drawing::Point(21, 245);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(333, 26);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"22";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(21, 218);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(333, 26);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"15";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(21, 191);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(333, 26);
			this->textBox6->TabIndex = 25;
			this->textBox6->Text = L"12";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(21, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(333, 26);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"4";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Visible = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(672, 27);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Чтобы получить рекомендации, оцените данные фильмы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(173, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(342, 40);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox11->ForeColor = System::Drawing::Color::Black;
			this->textBox11->Location = System::Drawing::Point(173, 136);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(333, 26);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L"Log";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::HotTrack;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox12->ForeColor = System::Drawing::Color::Black;
			this->textBox12->Location = System::Drawing::Point(173, 213);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(333, 26);
			this->textBox12->TabIndex = 30;
			this->textBox12->Text = L"Pass";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AcceptButton = this->GetRec;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 502);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox10);
			this->Controls->Add(this->comboBox9);
			this->Controls->Add(this->comboBox8);
			this->Controls->Add(this->comboBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->GetRec);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			System::Threading::Mutex^ m = System::Threading::Mutex::OpenExisting("MyMutex");
			m->WaitOne();
			std::string line,hash,id;
			 std::ifstream outfile(msclr::interop::marshal_as<std::string>(this->textBox11->Text));
			 std::getline(outfile,hash);
			  std::getline(outfile,id);
			 outfile.close();
			    std::ofstream special(msclr::interop::marshal_as<std::string>(this->textBox11->Text));
			 std::ofstream myfile;
			 Handler *helper=new Handler();
			 helper->putrec(msclr::interop::marshal_as<std::string>(this->textBox1->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox1->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox2->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox2->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox3->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox3->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox4->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox4->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox5->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox5->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox6->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox6->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox7->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox7->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox8->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox8->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox9->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox9->Text),
							 msclr::interop::marshal_as<std::string>(this->textBox10->Text),
							 msclr::interop::marshal_as<std::string>(this->comboBox10->Text));
			 Sleep(4000);
			m->ReleaseMutex();
			  
			Sleep(2000);	
			 this->textBox10->Visible=false;
			 this->comboBox10->Visible=false;
			 this->textBox9->Visible=false;
			 this->comboBox9->Visible=false;
			 this->textBox8->Visible=false;
			 this->comboBox8->Visible=false;
			 this->textBox7->Visible=false;
			 this->comboBox7->Visible=false;
			 this->textBox6->Visible=false;
			 this->comboBox6->Visible=false;
			 this->textBox5->Visible=false;
			 this->comboBox5->Visible=false;
			 this->textBox4->Visible=false;
			 this->comboBox4->Visible=false;
			 this->textBox3->Visible=false;
			 this->comboBox3->Visible=false;
			 Sleep(1000);
			 this->textBox2->Visible=false;
			 this->comboBox2->Visible=false;
			 Sleep(1000);
			 this->textBox1->Visible=false;
			 this->comboBox1->Visible=false;
			 Sleep(1000);
		
			 size_t pos;
			
			// m->WaitOne();
			 special<<hash<<"\n";
			 special<<id<<"\n";
			 std::vector<std::string> tokens;

			 std::string token;
			 std::ifstream myfile2;
			 myfile2.open ("example.txt");
			 std::getline(myfile2, line);
			 
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			 special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox1->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox1->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox1->Visible=true;
			 this->comboBox1->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox2->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox2->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox2->Visible=true;
			 this->comboBox2->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox3->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox3->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox3->Visible=true;
			 this->comboBox3->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox4->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox4->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox4->Visible=true;
			 this->comboBox4->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox5->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox5->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox5->Visible=true;
			 this->comboBox5->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 //std::cout << "WAS HERE";
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox6->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox6->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox6->Visible=true;
			 this->comboBox6->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox7->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox7->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox7->Visible=true;
			 this->comboBox7->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 //std::cout << "WAS HERE";
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox8->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox8->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox8->Visible=true;
			 this->comboBox8->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 //std::cout << "WAS HERE";
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	"<<"\n";
			 this->textBox9->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox9->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox9->Visible=true;
			 this->comboBox9->Visible=true;
			 tokens.clear();
			 std::getline(myfile2, line);
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				 //std::cout << "WAS HERE";
				 line.erase(0, pos + 1);

			 }
			  special<<tokens[1]<<"	"<<tokens[2]<<"	";
			 this->textBox10->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			 this->comboBox10->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->textBox10->Visible=true;
			 this->comboBox10->Visible=true;
			 special.close();
			//m->ReleaseMutex();
			 delete helper;
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			Handler *helper=new Handler();
			 std::string line;
			 //std::ifstream infile(msclr::interop::marshal_as<std::string>(this->textBox11->Text));
			
			 if (helper->is_user_exists(msclr::interop::marshal_as<std::string>(this->textBox11->Text)))
			 {
			std::ifstream infile(msclr::interop::marshal_as<std::string>(this->textBox11->Text));
			std::getline(infile, line);
			if(!(line.compare(md5(msclr::interop::marshal_as<std::string>(this->textBox12->Text)))))
			  {this->textBox1->Visible=true;
			 this->comboBox1->Visible=true;
			  this->textBox2->Visible=true;
			 this->comboBox2->Visible=true;
			  this->textBox3->Visible=true;
			 this->comboBox3->Visible=true;
			  this->textBox4->Visible=true;
			 this->comboBox4->Visible=true;
			  this->textBox5->Visible=true;
			 this->comboBox5->Visible=true;
			  this->textBox6->Visible=true;
			  this->comboBox6->Visible=true;
			  this->textBox7->Visible=true;
			 this->comboBox7->Visible=true;
			 this->comboBox8->Visible=true;
			 this->textBox8->Visible=true;
			 this->comboBox9->Visible=true;
			 this->textBox9->Visible=true;
			 this->comboBox10->Visible=true;
			 this->textBox10->Visible=true;
			  this->GetRec->Visible=true;
			 this->button1->Visible=false;
			 this->textBox11->Visible=false;
			 this->textBox12->Visible=false;
			 this->label1->Visible=true;
			 std::vector<std::string> tokens;
			 std::string token;
			 size_t pos;
			 std::getline(infile, line);//Пропускаем строку с айди
			 while(std::getline(infile, line)){
			 while ((pos = line.find("	")) != std::string::npos) {
				 token = line.substr(0, pos);
				 tokens.push_back(token);
				// std::cout << "WAS HERE";
				 line.erase(0, pos + 1);

			 }
			 }
			 this->textBox1->Text=msclr::interop::marshal_as<System::String ^>(tokens[0]);
			 this->comboBox1->Text=msclr::interop::marshal_as<System::String ^>(tokens[1]);
			  this->textBox2->Text=msclr::interop::marshal_as<System::String ^>(tokens[2]);
			 this->comboBox2->Text=msclr::interop::marshal_as<System::String ^>(tokens[3]);
			  this->textBox3->Text=msclr::interop::marshal_as<System::String ^>(tokens[4]);
			 this->comboBox3->Text=msclr::interop::marshal_as<System::String ^>(tokens[5]);
			  this->textBox4->Text=msclr::interop::marshal_as<System::String ^>(tokens[6]);
			 this->comboBox4->Text=msclr::interop::marshal_as<System::String ^>(tokens[7]);
			  this->textBox5->Text=msclr::interop::marshal_as<System::String ^>(tokens[8]);
			 this->comboBox5->Text=msclr::interop::marshal_as<System::String ^>(tokens[9]);
			  this->textBox6->Text=msclr::interop::marshal_as<System::String ^>(tokens[10]);
			 this->comboBox6->Text=msclr::interop::marshal_as<System::String ^>(tokens[11]);
			  this->textBox7->Text=msclr::interop::marshal_as<System::String ^>(tokens[12]);
			 this->comboBox7->Text=msclr::interop::marshal_as<System::String ^>(tokens[13]);
			  this->textBox8->Text=msclr::interop::marshal_as<System::String ^>(tokens[14]);
			 this->comboBox8->Text=msclr::interop::marshal_as<System::String ^>(tokens[15]);
			  this->textBox9->Text=msclr::interop::marshal_as<System::String ^>(tokens[16]);
			 this->comboBox9->Text=msclr::interop::marshal_as<System::String ^>(tokens[17]);
			  this->textBox10->Text=msclr::interop::marshal_as<System::String ^>(tokens[18]);
			 this->comboBox10->Text=msclr::interop::marshal_as<System::String ^>(tokens[19]);
			 }
			// this->textBox10->Text=msclr::interop::marshal_as<System::String ^>(line.substr(0, line.size()));
			 infile.close();
			 }
			 else
			 {
			 // infile.close();
			  helper->createuser(msclr::interop::marshal_as<std::string>(this->textBox11->Text),msclr::interop::marshal_as<std::string>(this->textBox12->Text));
			  this->textBox1->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->comboBox1->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox1->Visible=true;
			 this->comboBox1->Visible=true;
			  this->textBox2->Text=msclr::interop::marshal_as<System::String ^>("4");
			 this->comboBox2->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox2->Visible=true;
			 this->comboBox2->Visible=true;
			  this->textBox3->Text=msclr::interop::marshal_as<System::String ^>("8");
			 this->comboBox3->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox3->Visible=true;
			 this->comboBox3->Visible=true;
			  this->textBox4->Text=msclr::interop::marshal_as<System::String ^>("9");
			 this->comboBox4->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox4->Visible=true;
			 this->comboBox4->Visible=true;
			  this->textBox5->Text=msclr::interop::marshal_as<System::String ^>("11");
			 this->comboBox5->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox5->Visible=true;
			 this->comboBox5->Visible=true;
			  this->textBox6->Text=msclr::interop::marshal_as<System::String ^>("12");
			 this->comboBox6->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox6->Visible=true;
			 this->comboBox6->Visible=true;
			  this->textBox7->Text=msclr::interop::marshal_as<System::String ^>("15");
			 this->comboBox7->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox7->Visible=true;
			 this->comboBox7->Visible=true;
			  this->textBox8->Text=msclr::interop::marshal_as<System::String ^>("22");
			 this->comboBox8->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox8->Visible=true;
			 this->comboBox8->Visible=true;
			  this->textBox9->Text=msclr::interop::marshal_as<System::String ^>("81");
			 this->comboBox9->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox9->Visible=true;
			 this->comboBox9->Visible=true;
			  this->textBox10->Text=msclr::interop::marshal_as<System::String ^>("100");
			 this->comboBox10->Text=msclr::interop::marshal_as<System::String ^>("1");
			 this->textBox10->Visible=true;
			 this->comboBox10->Visible=true;
			 this->GetRec->Visible=true;
			 this->button1->Visible=false;
			 this->textBox11->Visible=false;
			 this->textBox12->Visible=false;
			 this->label1->Visible=true;
			 }
			 delete helper;
		 }
};
}

