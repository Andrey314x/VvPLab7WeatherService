#pragma once
#include "Weather.h"

class Service
{

	virtual Weather getWeather(std::string s) = 0;

public:
	virtual ~Service();
};

