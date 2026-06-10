#pragma once

ref class Valueation;
ref class Stock;

ref class Company
{
public: enum class CompanySector {
		Tech,
		Medicine,
		Research,
		Retail,
		Defense,
		Energy,
		Aerospace,
		Engineering,
		Construction,
		Financials,
		Moto_Vehicles,
		Telecomunications,
		Chemicals,
};

private:
	System::Guid m_oID;
	System::String^ m_sCompanyName;
	int m_nCompanyFoundingYear;
	CompanySector m_eSector;
	Valueation^ m_rValueation;
	Stock^ m_rStock;


};

