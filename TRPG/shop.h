#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
extern struct shop
{
	std::string iName;
	int iPrice;
	std::string gold;
};

extern class Shops
{
	int ShpoMain()
	{
		std::string Gold;
		int ShieldPrice, ArmorPrice, helmetPrice, bootsPrice, RobePrice;

		int GreateAxePrice, AxePrice, LongSwordPrice, SwordPrice, SpearPrice, clipPrice, DegarPrice, MroningStarPrice;

		int BowPrice, ThrowKnifePrice;

		int HP_PotionPrice, MP_PotionPrice, GHP_PotionPrice, GMP_PotionPrice, antidotePrice, bandagePrice;

		int Shield, Armor, helmet, boots, Robe;

		int GreateAxe, Axe, LongSword, Sword, Spear, clip, Degar, MroningStar;

		int Bow, ThrowKnife;

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

class Buy_Item;
class SEll_Item;

#endif 

