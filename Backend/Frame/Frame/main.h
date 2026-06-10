//Preset return values consistant across the application

#define ERROR_STATE -1;
#define SUCCSESS_STATE 1;
#define NEUTRAL_STATE 0;

//Preset exit codes for the application

#define DEFAULT_EXIT_CODE 0;
#define ERROR_EXIT_CODE -1;

//Default debug parameters for the GraphQL

#define DEFAULT_IP "127.0.0.1";
#define DEFAULT_PORT 8080;
#define DEFAULT_PROTOCOL "HTTP/S"

//Headers for JWT in HTTP/S Authentification

#define JWT_TOKEN "session_token"
#define JWT_BEARER "token_bearer"
#define JWT_ALGO "alg";
#define JWT_SECRET "jwt_secret"
#define JWT_SUB "sub"
#define JWT_NAME "name"
#define JWT_ISSUEDAT "iat"
#define JWT_ISADMIN "admin"

//Default includes
#include "stdio.h"
#include "stdint.h"
#include "../../Logging/Log.h"

//Specific Headers
#include "processthreadsapi.h"

//Global Enums
public enum ProcessTypes{
	Head							= 0x001,
	Webserver				= 0x002,
	Analytics					= 0x003,
	Logging					= 0x004,
	DBConnection		= 0x005,
	APIConnector		= 0x006,
	Simulator				= 0x007,
};


//Main Class
public ref class Master {
private:
	Log^ m_oLog;
	bool m_bHasChildProcesses;
	DWORD m_nOwnProcessID;

	System::Collections::Generic::Dictionary<DWORD, System::Diagnostics::Process^>^ m_mnrChildProcesses;

public:
	Master();
	~Master();
	int main(const char* args, int argc);
	void BalanceLoad();
	void RerouteClient(DWORD nClientID, DWORD nOriginProcess, ProcessTypes e);
	bool SpawnChildProcess(ProcessTypes e);
	void KillChildProcess(DWORD nProcessID);

//===================================================================================
// Getter & Setter
//===================================================================================
	Log^ GetLog() { return m_oLog; }
};