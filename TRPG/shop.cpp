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
shop::shop(const std::string& name, int price) : iname(name), iprice(price)
{

};
shop::~shop()
{

};
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

vector<shop>shop::RangeWeapon()
{
	vector<shop> RangeWeaponList = {};
	return RangeWeaponList;
}

vector<shop> shop::Expendables()
{
	vector<shop> ExpendablesList = {};
	return ExpendablesList;
}


int shop::ShopMain(int s)
{
	cout << "welcome to the shop.decide what type of equipment to look at" << endl;
	cout << "1. armor" << endl << "2. weapon" << endl << "3. range weapon" << endl << "4. expendables" << endl;

	int equipmentchoice = 0;
	cin >> equipmentchoice;

	if (equipmentchoice == 1)
	{
		for (int i = 0; i < ArmorSize; i++)
		{


		}
	}
	else if (equipmentchoice == 2)
	{
		for (int i = 0; i < WeaponSize; i++)
		{


		}

	}
	else if (equipmentchoice == 3)
	{
		for (int i = 0; i < RangeWeaponSize; i++)
		{


		}

	}
	else if (equipmentchoice == 4)
	{
		for (int i = 0; i < ExpendablesSize; i++)
		{

		}

	}
	try
	{
		if (equipmentchoice <= 5)
		{
			return 0;
		}
	}
	catch (int a)
	{
		cout << "your got the wrong number choose. choice the 1 ~ 4 number." << endl;
	}
	return 0;
}










