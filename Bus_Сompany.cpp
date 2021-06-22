#include "Bus_Ñompany.h"

Bus_Ñompany::Bus_Ñompany(std::string name_company) {
	name_company_ = name_company;

};

void Bus_Ñompany::AddTime(std::string time_departure, std::string time_end) {
	sorting_time_departure_.insert(time_departure);
	sorting_time_end_.insert(sorting_time_end_.begin(), time_end);
}

std::string Bus_Ñompany::GetNameCompany() {
	return name_company_;
};

std::string Bus_Ñompany::GetTimeDeparture() {
	return time_departure_;
};

std::string Bus_Ñompany::GetTimeEnd() {
	return time_end_;
};

void Bus_Ñompany::Print() {
	std::cout << "Name Bus Company: " << name_company_<<"."<< std::endl;
	for (std::set <std::string>::iterator i = sorting_time_departure_.begin(); i != sorting_time_departure_.end(); i++) {
		std::cout << "Time Departure: " << std::endl;
		std::cout << *i<< std::endl;
	}
	for (std::vector <std::string>::iterator j = sorting_time_end_.begin(); j != sorting_time_end_.end(); j++) {
		std::cout << "Time End: " << std::endl;
		std::cout << *j << std::endl;
	}
};


