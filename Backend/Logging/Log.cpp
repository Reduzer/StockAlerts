#include "Log.h"

Log::Log () {
	m_rmzsCurrentLog = gcnew System::Collections::Generic::Dictionary<System::DateTime, System::String^>();
}

Log::~Log(){
	
}

void Log::WriteToFile () {
	System::String^ rsAppData = gcnew System::String(getenv("APPDATA"));
	System::String^ rsFullName = gcnew System::String(rsAppData + "/" + FILE_PREFIX  + "/" + System::DateTime::Now);

	System::IO::StreamWriter^ rSW = gcnew System::IO::StreamWriter(rsFullName);
	
	TMapDateStringEnumerator oEnumerator = m_rmzsCurrentLog->GetEnumerator();
	while (oEnumerator.MoveNext() != NULL) {
		rSW->WriteLine(oEnumerator.Current.Key + ": " + oEnumerator.Current.Value);
	}
	rSW->Close();
	rSW->Flush();
}

void Log::WriteToLog (System::String^ rs, LogLevel e) {
	System::String^ rsTemp = gcnew System::String("");

	rsTemp += e.ToString() + ": " + rs;

	m_rmzsCurrentLog->Add(System::DateTime::Now, rsTemp);
}