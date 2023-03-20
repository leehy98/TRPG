#include <iostream>
#include <string>
#include <vector>
#include "shop.h"
#include "inven.h"
#include "item.h"

using namespace std;

int ArmorSize = 5;
int WeaponSize = 8;
int RangeWeaponSize = 3;
int ExpendablesSize = 6;

// shop 생성자
shop::shop()
{
	iname = "item name";
	iprice = 0;
};
shop::shop(const std::string& name, int price) : iname(name), iprice(price)
{

};
// 소멸자
shop::~shop() {};

vector<shop> shop::Weapon()
{	
	std::vector<shop> weaponList = {};
	return weaponList;
}

vector<shop>shop::Armor()
{
	vector<shop> ArmorList = {};
	return ArmorList;
}

vector<shop> shop::Expendables()
{
	vector<shop> ExpendablesList = {};
	return ExpendablesList;
}

int shop::ShopMain(int s)
{
	system("cls");
	shop iShop;
	vector<shop> weapons = iShop.Weapon();
	vector<shop> Armor = iShop.Armor();
	vector<shop> Expendables = iShop.Expendables();

	cout << "welcome to the shop.decide what type of equipment to look at" << endl << endl;
	cout << "1. armor" << endl << "2. weapon" << endl << "3. range weapon" << endl << "4. expendables" << endl;

	int equipmentchoice = 0;
	cin >> equipmentchoice;

	if (equipmentchoice == 1)
	{
		for (int i = 0; i < ArmorSize; i++)
		{
			cout << "Armor" << endl;

		}
	}
	else if (equipmentchoice == 2)
	{
		for (int i = 0; i < WeaponSize; i++)
		{
			cout << "Weapon" << endl;

		}

	}
	else if (equipmentchoice == 3)
	{
		for (int i = 0; i < ExpendablesSize; i++)
		{
			cout << "Expendables" << endl;

		}

	}
	try
	{
		if (equipmentchoice <= 4)
		{
			return 0;
		}
	}
	catch (int a)
	{
		cout << "your got the wrong number choose. choice the 1 ~ 3 number." << endl;
	}
	return 0;
}










