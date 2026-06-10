#include "stdint.h"

typedef System::Collections::Generic::Dictionary<System::DateTime, uint32_t>^ TMap;

#pragma once
ref class Valueation
{
private:
	System::Guid^ m_oID;
	uint32_t m_unCurrentPrice;
	uint32_t m_unLastRecordedPrice;
	int m_nPriceDifferenceToLastRecorded;
	System::DateTime^ m_zLastTimeRecorded;

public:
	Valueation();
	~Valueation();
//===================================================================================
//
//===================================================================================





//===================================================================================
// Getter & Setter
//===================================================================================
	uint32_t GetCurrentPrice() { return m_unCurrentPrice; }
	uint32_t GetLastRecordedPrice() { return m_unLastRecordedPrice; }
	System::DateTime^ GetLastRecordedTime() { return m_zLastTimeRecorded; }
	long long GetCurrentPriceDifferences();
	TMap GetAllRecordedPrices();
	TMap GetRecordedPrices(System::DateTime^ rzStartDate);
	TMap GetRecordedPrices(System::DateTime^ rzStartDate, System::DateTime^ rzEndDate);
};

