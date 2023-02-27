#include "Client.h"
#include <iostream>

using namespace std;

Client::Client() {

}

void Client::OpeningPrompt()
{
	string input;
	printf("Please input the name of the budget: ");
	cin >> input;

	db = Database(input);

}

void Client::MainMenu()
{
	printf("What do you want to do?");
	printf("1. Set the budget				a. Set the month and year");
	printf("2. Add a Transaction			b. Add a category");
	printf("3. Print full budget			c. Remove a category");
	printf("4. quit							d. List Categories");
	
}

void Client::SetBudgetPrompt()
{
	printf("The current budget is for %s %s", dt.getMonthName().c_str(), dt.getYearNumber().c_str());
}
