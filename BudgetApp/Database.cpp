#include "Database.h"

Database::Database(std::string databaseName)
{
	db = new Database(databaseName);
}

Database::~Database()
{
}

bool Database::SetMonthlyBudget(Date dt, int amount)
{
	return false;
}

bool Database::SetCategoryAmount(Date dt, std::string category, int amount)
{
	return false;
}

bool Database::AddTransaction(Date dt, short categoryId, std::string party, int amount)
{
	return false;
}
