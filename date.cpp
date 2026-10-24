#include <iostream>
#include "date.h" 
#include <sstream>

Date::Date(){
	month = 1;
	day = 1;
	year = 2000;
}


void Date::init(std::string dateString){
	std::stringstream converter;
	std::string sMonth;
	std::string sDay;
	std::string sYear;

	converter.str(dateString);
	getline(converter, sMonth, '/');
	getline(converter, sDay, '/');
	getline(converter, sYear, '/');


	converter.clear();
	converter.str("");


	converter << sMonth << "" << sDay <<  "" << sYear;
	converter >> month >> day >> year;

}


void Date::printDate(){
	std::cout << month << "" << day << "" << year << std::endl;
}
