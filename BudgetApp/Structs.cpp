#include "Structs.h"

Date::Date()
{
	Date(1, 2020, 1);
}

Date::Date(short month, short year, short day)
{
	this->month = month;
	this->month >12 ? this->month = 12 :
		this->month < 1 ? this->month = 1: NULL ;

	this->year = year;
	this->year < 1 ? this->year = 1 : NULL;

	this->day = day;
	this->day > 31 ? this->day = 31 :
		this->day < 1 ? this->day = 1 : NULL;
}

Date::Date(std::string)
{
}

std::string Date::getMonthName()
{
	switch (month) {
		case 1:
			return "January";
			break;
		case 2:
			return "February";
			break;
		case 3:
			return "March";
			break;
		case 4:
			return "April";
			break;
		case 5:
			return "May";
			break;
		case 6:
			return "June";
			break;
		case 7:
			return "July";
			break;
		case 8:
			return "August";
			break;
		case 9:
			return "September";
			break;
		case 10:
			return "October";
			break;
		case 11:
			return "November";
			break;
		case 12:
			return "December";
			break;
		default:
		return "BAD MONTH ERROR"
	}
}

std::string Date::getMonthNumber()
{
	return std::to_string(month);
}

std::string Date::getYearNumber()
{
	return std::string();
}
