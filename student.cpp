#include <iostream>
#include <sstream>
#include "Student.h"
 
Student::Student(){
	firstName = "";
	lastName = "";
	creditHours = 0;
}
 
 
void Student::init(std::string studentString){
	std::stringstream converter;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirthDate;
	std::string sCreditHours;
 
	converter.str(studentString);
	getline(converter, firstName, ',');
	getline(converter, lastName, ',');
	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');
	getline(converter, sBirthDate, ',');
	getline(converter, sCreditHours, ',');
 
	address.init(street, city, state, zip);
	birthDate.init(sBirthDate);
 
	converter.clear();
	converter.str("");
 
	converter << sCreditHours;
	converter >> creditHours;
}
 
 
void Student::printStudent(){
	std::cout << firstName << " " << lastName << std::endl;
	address.printAddress();
	std::cout << "DOB: ";
	birthDate.printDate();
	std::cout << "Credits: " << creditHours << std::endl;
}
 
 
std::string Student::getLastFirst(){
	return lastName + ", " + firstName;
}
