#include <iostream>
#include <string>
#include<vector>
#include "shop.h"
#include "MainMenu.h"
#include "inven.h"


//포인터 vector 사용해서 수정 할 예정
using namespace std;

struct shop
{
	string iName;
	int iPrice;
	string gold;
};

class Shops
{
	int ShpoMain()
	{
		//return mainPage();
		string Gold = "G";
		int ShieldPrice = 150, ArmorPrice = 200, helmetPrice = 135, bootsPrice = 125, RobePrice = 170;

		int GreateAxePrice = 250, AxePrice = 140, LongSwordPrice = 200 , SwordPrice = 110, SpearPrice = 130, clipPrice = 125, DegarPrice = 100, MroningStarPrice = 135;
	
		int BowPrice = 150, ThrowKnifePrice = 20;
	
		int HP_PotionPrice = 50, MP_PotionPrice = 50, GHP_PotionPrice = 150, GMP_PotionPrice = 150, antidotePrice = 150, bandagePrice = 150;
	

		// 아이템 스텟 
		//방어구
		int Shield = 10, armor = 15, helmet = 10, boots = 5, Robe = 8;

		// 근접 무기 
		//Axe끼고 공격시 일정 확률로 가드 브레이크, GreateAxe는 더 큰 확률로 가드 브레이크
		//Sword 플레이어가 attack 할시 일정 확률로 상대의 공격을 방어, LongSword는 더 큰 확률로 방어 
		int GreateAxe = 20, Axe = 10, LongSword = 14, Sword = 7, Spear = 13, clip = 9, Degar = 5, MroningStar = 8;
	
		// 원거리 무기
		int Bow = 50, ThrowKnife = 20;
	
		// 포션
		int HP_Potion = 50, MP_Potion = 30, GHP_Potion = 75, GMP_Potion = 45, antidote, bandage ;

		/*
		int ArmorSize = 5;
		int WeaponSize = 8;
		int RangeWeaponSize = 3;
		int ExpendablesSize = 6;
		*/
	
		const shop Armor[5] = { {"Shield : ",ShieldPrice, Gold},
								{"Armor : ",ArmorPrice, Gold},
								{"helmet : ",helmetPrice, Gold},  
								{"boots : ",bootsPrice, Gold}, 
								{"robe : ",RobePrice, Gold} 
		};

		 const shop Weapon[8] = { {"GreateAxe : ",GreateAxePrice, Gold},
								  {"Axe : ", AxePrice, Gold},
								  {"LongSword : ", LongSwordPrice, Gold},
								  {"Sword : ", SwordPrice, Gold},
								  {"Spear : ", SpearPrice ,Gold},
								  {"clip : ", clipPrice, Gold},
								  {"Degar : ", DegarPrice, Gold},
								  {"MroningStar : ", MroningStarPrice, Gold} 
		  };

		 const shop RangeWeapon[3] = { {"Bow : ",BowPrice, Gold},
									 {"ThrowKnife : ", ThrowKnifePrice , Gold} 
		};

		 const shop Expendables[6] = { {"HealingPotion : ", HP_PotionPrice,  Gold},
									   {"ManaPotion : ", MP_PotionPrice, Gold},
									   {"GreateHealingPotion : ", GHP_PotionPrice, Gold},
									   {"GreateManaPotion : ", GMP_PotionPrice, Gold},
									   {"antidote : ",antidotePrice, Gold},
									   {"bandage : ", bandagePrice, Gold} 
		};

		 int ArmorSize = (sizeof(Armor) / sizeof(*Armor));
		 int WeaponSize = (sizeof(Weapon) / sizeof(*Weapon));
		 int RangeWeaponSize = (sizeof(RangeWeapon) / sizeof(*RangeWeapon));
		 int ExpendablesSize = (sizeof(Expendables) / sizeof(*Expendables));

		cout << "Welcome to the shop.Decide what type of equipment to look at" << endl;
		cout << "1. Armor" << endl << "2. weapon" << endl << "3. Range Weapon" << endl << "4. Expendables" << endl;

		int equipmentChoice = 0;
		cin >> equipmentChoice;

		if (equipmentChoice == 1)
		{
			for(int i = 0 ; i < ArmorSize; i++)
			{
				for(const auto& value : Armor)
				{
					cout << "what armor do you buy" << endl;
					cout << i << " : " << value.iName << endl;
					cout << endl;
				}

			}
		}
		if (equipmentChoice == 2)
		{
			for (int i = 0; i < WeaponSize; i++)
			{
				for(const auto& value : Weapon)
				{
					cout << "what Weapon do you buy" << endl;
					cout << i << " : " << value.iName << endl;
					cout << endl;
				}

			}
	 
		}
		if (equipmentChoice == 3)
		{
			for (int i = 0; i < RangeWeaponSize; i++)
			{
				for(const auto&value : RangeWeapon)
				{
					cout << "what Range RangeWeapon do you buy" << endl;
					cout << i << " : " << value.iName << endl;
					cout << endl;
				}

			}

		}
		if (equipmentChoice == 4)
		{
			for (int i = 0; i < ExpendablesSize; i++)
			{
				for(const auto & value : Expendables)
				{
					cout << "what Range Expendables do you buy" << endl;
					cout << i << " : " << value.iName << endl;
					cout << endl;
				}

			}

		}

	}

};

// i번째 아이템을 사려고 선택 하게 되면 <vector>inventory 로 push 하고 팔게되면 
// 아이템 가격의 50%를 돌려받고 해당 index 는 erase 하도록 할 예정

class Buy_Item : public ShopMain 
{
	int buy_item()
	{
		int buy;
		int choice_item;
		cin >> choice_item;
		if (buy == 1)
		{
			
		};

	}
	
};

class SEll_Item : public ShopMain
{

};

