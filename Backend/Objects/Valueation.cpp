#include "Valueation.h"

Valueation::Valueation () {

}

Valueation::~Valueation () {

}

long long Valueation::GetCurrentPriceDifferences () {
	return m_unCurrentPrice - m_unLastRecordedPrice;
}

TMap Valueation::GetAllRecordedPrices () {
	return nullptr;
	//Make DB Request
}

TMap Valueation::GetRecordedPrices (System::DateTime^ rzStartDate) {
	return nullptr;
}

TMap Valueation::GetRecordedPrices (System::DateTime^ rzStartDate, System::DateTime^ rzEndDate) {
	 return nullptr;
}