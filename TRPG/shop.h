#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
typedef struct shop
{
	std::string iName;
	int iPrice;
	std::string gold;
};

class Shops
{
	int ShpoMain()
	{
		std::string Gold;
		extern int ShieldPrice, ArmorPrice, helmetPrice, bootsPrice, RobePrice;

		extern int GreateAxePrice, AxePrice, LongSwordPrice, SwordPrice, SpearPrice, clipPrice, DegarPrice, MroningStarPrice;

		extern int BowPrice, ThrowKnifePrice;

		extern int HP_PotionPrice, MP_PotionPrice, GHP_PotionPrice, GMP_PotionPrice, antidotePrice, bandagePrice;

		extern int Shield, Armor, helmet, boots, Robe;

		extern int GreateAxe, Axe, LongSword, Sword, Spear, clip, Degar, MroningStar;

		extern int Bow, ThrowKnife;

		int HP_Potion, MP_Potion, GHP_Potion, GMP_Potion, antidote, bandage;

		shop Armor[5];

		shop Weapon[8];

		shop RangeWeapon[3];

		shop Expendables[6];


		int ArmorSize;
		int WeaponSize;
		int RangeWeaponSize;
		int ExpendablesSize;
		int equipmentChoice;
	}
};

class Buy_Item
{

};
class SEll_Item
{

};

#endif 

