#ifndef STUDENT_H
#define STUDENT_H
 
#include <string>
#include "address.h"
#include "date.h"
 
class Student {
private:
	std::string firstName;
	std::string lastName;
	Address address;
	Date birthDate;
	int creditHours;
 
public:
	Student();
	void init(std::string studentString);
	void printStudent();
	std::string getLastFirst();
};
 
#endif
 
