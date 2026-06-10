#pragma once
ref class EnumCollection
{
public: enum class HealthChecks {
		Healthy,
		Under_load,
		Under_Heavy_Load,
		Extreme_Load,
		Faulty,
	};

	enum class Excange {
		Ping,
		Data,
	};
};

