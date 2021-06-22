#include <iostream>
#include "Bus_Ñompany.h"

using namespace std;

int main() {
	int name_bus;
	Bus_Ñompany Posh("Posh Bus Company");
	Bus_Ñompany Grotty("Grotty Bus Company");
	cout << "Enter the name of the bus company: " << endl;
	cout <<"1."<< Posh.GetNameCompany() << endl;
	cout <<"2."<< Grotty.GetNameCompany() << endl;
	cin >> name_bus;

	if (name_bus == 1) {
		Posh.AddTime("10:15", "11:10");
		Posh.AddTime("10:10", "11:00");
		Posh.AddTime("12:05", "12:30");
		Posh.AddTime("17:25", "18:01");
		Posh.Print();
	}
	else if (name_bus == 2) {
		Grotty.AddTime("10:10", "11:00");
		Grotty.AddTime("16:30", "18:45");
		Grotty.AddTime("12:30", "13:25");
		Grotty.AddTime("12:45", "13:25");
		Grotty.Print();
	}
}