// BudgetApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sqlite3.h>

int main()
{
    sqlite3* db;
    char* zErrorMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);
    if (rc) {
        std::cout << "Can't open database " << sqlite3_errmsg(db) << std::endl;
        return 0;
    }
    else {
        std::cout << "Opened DB successfully" << std::endl;
    }
    sqlite3_close(db);
}