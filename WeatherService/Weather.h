#pragma once
#include <string>

using namespace std;

class Weather
{
public:
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

public:
	Weather(string city, double lon, double lat, double temp, string weather, double windspeed, int clouds) {
		this->city = city;
		this->lon = lon;
		this->lat = lat;
		this->temperature = temp;
		this->weather = weather;
		this->windSpeed = windspeed;
		this->clouds = clouds;
	}

};

