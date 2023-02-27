#pragma once
#include <sqlite3.h>
#include <string>
#include "Structs.h"

class Database
{
public:
	Database(std::string databaseName);
	~Database();

	bool SetMonthlyBudget(Date dt, int amount);
	bool SetCategoryAmount(Date dt, std::string category, int amount);
	bool AddTransaction(Date dt, short categoryId, std::string party, int amount);

private:
	Database* db;

};

