#pragma once
#include <string>

struct Date {
	Date();
	Date(short month, short year, short day=1);

private:	
	Date(std::string);
	// day, 1-31
	short day;
	// Month, 1 - 12
	short month;
	// Year in full
	short year;

public:
	std::string getMonthName();
	std::string getMonthNumber();
	std::string getYearNumber();
};