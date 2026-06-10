#include "main.h"


bool SpawnChildProcess(ProcessTypes e) {

}
	
int Master::main (const char* args, int argc) {
	m_oLog->WriteToLog("", Log::LogLevel::Information);
	m_nOwnProcessID = GetCurrentProcessId();



	
	return 0;
}

Master::Master() {
	m_oLog = gcnew(Log);
};