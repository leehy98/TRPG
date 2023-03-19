#include <iostream>
#include <string>
#include "main.h"
#include "shop.h"
#include "battle.h"

using namespace std;

int main(int c)
{
	int MenuChoices = 0;

	cout << "Welcome to the TRPG project, what would you like to do?" << endl;
	cout << "1.fight the monsters." << endl;
	cout << "2.Browse Items" << endl;
	cin >> MenuChoices;

	if (MenuChoices == 1)
	{
		int battle = battleSystem(1);
	}
	else if (MenuChoices == 2)
	{
		string name = "item name";
		int price = 0;
		shop myShop(name, price);
		int shop = myShop.ShopMain(2);
	}
	return 0;
}

