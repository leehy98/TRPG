#include <iostream>
#include "MainMenu.h"
#include "main.h"
#include "shop.h"

using namespace std;

int mainPage(int MenuChoice)
{
	int MenuChoices = 0;

	cout << "what action would you take." << endl;
	cout << "1.fighting monsters." << endl;
	cout << "2.ItemShop" << endl;
	cin >> MenuChoices;

	if(MenuChoices == 1)
	{
		main();
	}
	if (MenuChoices == 2)
	{
		ShopMain();
	}

	return 0;
}	

