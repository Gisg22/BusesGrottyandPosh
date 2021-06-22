#pragma once
#include <iostream>
#include <set>
#include <vector>

class Bus_Ñompany
{
public:
	Bus_Ñompany(std::string name_company);
	void AddTime(std::string time_departure, std::string time_end);
	std::string GetNameCompany();
	std::string GetTimeDeparture();
	std::string GetTimeEnd();
	void Print();
private:
	std::string name_company_;
	std::string time_departure_;
	std::string time_end_;
	std::set <std::string> sorting_time_departure_;
	std::vector <std::string>  sorting_time_end_;
};

