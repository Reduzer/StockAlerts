#pragma once

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

#define FILE_PREFIX "LOG_"

typedef  System::Collections::Generic::Dictionary<System::DateTime, System::String^>^ TMapDateString;
typedef System::Collections::Generic::Dictionary<System::DateTime, System::String^>::Enumerator TMapDateStringEnumerator;

ref class Log
{
public:
	enum class LogLevel {
	Information,
	Warning,
	Error,
	Crash,
	};

private:
	TMapDateString m_rmzsCurrentLog;
	void WriteToFile();

public:
	Log();
	~Log();
	void WriteToLog(System::String^ rs, LogLevel e);
};