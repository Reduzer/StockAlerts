#pragma once

#include "stdint.h"
#include "..\Shared\EnumCollection.h"

ref class Log;

ref class LoadBalancing
{
private:
	System::Collections::Generic::Dictionary<unsigned long long, System::Diagnostics::Process^> m_mnrChildProcesses;
	void CheckChildProcesses();
	void SpawnChildProcess();


public:
	LoadBalancing();
	~LoadBalancing();
	System::Collections::Generic::List<EnumCollection::HealthChecks> MakeHealthChecks();



};

