void CreateMutex(){
	using namespace System;
	using namespace System::Threading;
	Mutex^ m = gcnew Mutex(false, "MyMutex");
}

void OpenMutex(System::String^ mutexName) {
	using namespace System;
	using namespace System::Threading;
	Mutex^ m = Mutex::OpenExisting(mutexName);
}

void WaitMutex(System::Threading::Mutex^ m){
	using namespace System;
	using namespace System::Threading;
	m->WaitOne();
}

void FreeMutex(System::Threading::Mutex^ m){
	using namespace System;
	using namespace System::Threading;
	m->ReleaseMutex();
}