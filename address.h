#include <string> 

#ifndef ADDRESS_H_EXISTS
#define ADDESS_H_EXISTS


class Address{
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;

	public:
		void Address();
		void init(std::string street, std::string city, std::string state, std::string zip);
		void printAddress();
}







#endif 
