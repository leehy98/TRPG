#include <iostream>
#include <string>
#include <vector>
#include "shop.h"
#include "mainmenu.h"
#include "inven.h"

//포인터 vector 사용해서 수정 할 예정

using namespace std;

struct item
{
	string iname;
	int iprice;
	string gold;
};

Store::Store(int a)
{

}
Store::~Store()
{

}
int Store::ShopMain()
{
	//return mainpage();
	 
	string gold = "G";
	int Shieldprice = 150, ArmorPrice = 200, HelmetPrice = 135, BootsPrice = 125, RobePrice = 170;

	int GreateAxePrice = 250, AxePrice = 140, LongswordPrice = 200, SwordPrice = 110, SpearPrice = 130, ClipPrice = 125, DegarPrice = 100, MroningstarPrice = 135;

	int BowPrice = 150, ThrowKnifePrice = 20;

	int HP_potionPrice = 50, MPtionPice = 50, GHP_potionPrice = 150, GMP_ptionPrice = 150, AntidotePrice = 150, BandagePrice = 150;


	// 아이템 스텟 
	//방어구
	int Shield = 10, Armor = 15, helmet = 10, Boots = 5, Robe = 8;

	// 근접 무기 
	//Axe끼고 공격시 일정 확률로 가드 브레이크, GreateAxe는 더 큰 확률로 가드 브레이크
	//sword 플레이어가 attack 할시 일정 확률로 상대의 공격을 방어, Longsword는 더 큰 확률로 방어 
	int GreateAxe = 20, Axe = 10, Longsword = 14, sword = 7, Spear = 13, Clip = 9, Degar = 5, Mroningstar = 8;

	// 원거리 무기
	int Bow = 50, ThrowKnife = 20;

	// 포션
	int hp_potion = 50, MP_potion = 30, GHP_potion = 75, gMP_potion = 45, Antidote, bandage;

	/*
	int armorsize = 5;
	int WeaponSize = 8;
	int RangeWeaponSize = 3;
	int ExpendablesSize = 6;
	*/


	item armor[5] = { {"Shield : ",Shieldprice, gold},
							{"armor : ",ArmorPrice, gold},
							{"helmet : ",HelmetPrice, gold},
							{"Boots : ",BootsPrice, gold},
							{"Robe : ",RobePrice, gold}
	};

	item weapon[8] = { {"GreateAxe : ",GreateAxePrice, gold},
							  {"Axe : ", AxePrice, gold},
							  {"Longsword : ", LongswordPrice, gold},
							  {"sword : ", SwordPrice, gold},
							  {"Spear : ", SpearPrice ,gold},
							  {"Clip : ", ClipPrice, gold},
							  {"Degar : ", DegarPrice, gold},
							  {"Mroningstar : ", MroningstarPrice, gold}
	};

	item rangeweapon[3] = { {"Bow : ",BowPrice, gold},
								 {"ThrowKnife : ", ThrowKnifePrice , gold}
	};

	item expendables[6] = { {"healingpotion : ", HP_potionPrice,  gold},
								   {"manapotion : ", MPtionPice, gold},
								   {"greatehealingpotion : ", GHP_potionPrice, gold},
								   {"greatemanapotion : ", GMP_ptionPrice, gold},
								   {"Antidote : ",AntidotePrice, gold},
								   {"bandage : ", BandagePrice, gold}
	};

	int armorsize = (sizeof(armor) / sizeof(*armor));
	int WeaponSize = (sizeof(weapon) / sizeof(*weapon));
	int RangeWeaponSize = (sizeof(rangeweapon) / sizeof(*rangeweapon));
	int ExpendablesSize = (sizeof(expendables) / sizeof(*expendables));

	cout << "welcome to the shop.decide what type of equipment to look at" << endl;
	cout << "1. armor" << endl << "2. weapon" << endl << "3. range weapon" << endl << "4. expendables" << endl;

	int equipmentchoice = 0;
	cin >> equipmentchoice;

	if (equipmentchoice == 1)
	{
		for (int i = 0; i < armorsize; i++)
		{
			for (const auto& value : armor)
			{
				cout << "what armor do you buy" << endl;
				cout << i << " : " << value.iname << endl;
				cout << endl;
			}

		}
	}
	if (equipmentchoice == 2)
	{
		for (int i = 0; i < WeaponSize; i++)
		{
			for (const auto& value : weapon)
			{
				cout << "what weapon do you buy" << endl;
				cout << i << " : " << value.iname << endl;
				cout << endl;
			}

		}

	}
	if (equipmentchoice == 3)
	{
		for (int i = 0; i < RangeWeaponSize; i++)
		{
			for (const auto& value : rangeweapon)
			{
				cout << "what rangeweapon do you buy" << endl;
				cout << i << " : " << value.iname << endl;
				cout << endl;
			}

		}

	}
	if (equipmentchoice == 4)
	{
		cout << "what expendables do you buy" << endl;
		for (int i = 0; i < ExpendablesSize; i++)
		{
			for (const auto& value : expendables)
			{
				cout << i << " : " << value.iname << endl;
				cout << endl;
			}

		}

	}

	return 0;
}



// i번째 아이템을 사려고 선택 하게 되면 <vector>inventory 로 push 하고 팔게되면 
// 아이템 가격의 50%를 돌려받고 해당 index 는 erase 하도록 할 예정
// 이 게임은 포인터로 아이템 주소값을 가져와서 할당하는게 좋은 방법으로 보인다 



