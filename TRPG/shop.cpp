#include <iostream>
#include <string>
#include <vector>
#include "shop.h"
#include "mainmenu.h"
#include "inven.h"
#include "item.h"

using namespace std;

int ArmorSize = 5;
int WeaponSize = 8;
int RangeWeaponSize = 3;
int ExpendablesSize = 6;

//item 생성자
item::item(const std::string& name, int price) : iname(name), iprice(price)
{

}
//item 소멸자
item::~item()
{

}
// shop 생성자
shop::shop()
{

};
shop::~shop()
{

};
vector<item> shop::Weapon()
{
	std::vector<item> weaponList = { itemStats::GreatAxe, Axe, Longsword, Sword, Spear, Clip, Degar, Mroningstar };
	return weaponList;
}


vector<item>shop::Armor()
{
	vector<item> ArmorList = {};
	return;
}

vector<item>shop::RangeWeapon()
{
	vector<item> RangeWeaponList = {};
	return;
}

vector<item> shop::Expendables()
{
	vector<item> ExpendablesList = {};
	return;
}

// shop 소멸자

int shop::ShopMain()
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
		if (equipmentchoice < 4)
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



buy_Item::buy_Item()
{

}
buy_Item::~buy_Item()
{

}
sell_Item::sell_Item()
{

};
sell_Item::~sell_Item()
{

};






