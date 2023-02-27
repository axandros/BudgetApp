#pragma once
#include "Database.h"
#include "Structs.h"

class Client
{
	Client();
	void OpeningPrompt();
	void MainMenu();
	void SetBudgetPrompt();

private: 
	Date dt;
	Database db;
};

