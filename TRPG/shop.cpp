#include <iostream>
#include <string>
#include "shop.h"
#include "MainMenu.h"
#include "MainMenu.cpp"

//������ vector ����ؼ� ���� �� ����
using namespace std;
struct shop
{
	string iName;
	int iPrice;
	string gold;
};
class ShopMain : public gameStart
{
<<<<<<< HEAD
	int Main()
	{
		//return mainPage();
		string Gold = "G";
		int ShieldPrice = 150, ArmorPrice = 200, helmetPrice = 135, bootsPrice = 125, RobePrice = 170;

		int GreateAxePrice = 250, AxePrice = 140, LongSwordPrice = 200 , SwordPrice = 110, SpearPrice = 130, clipPrice = 125, DegarPrice = 100, MroningStarPrice = 135;
	
		int BowPrice = 150, ThrowKnifePrice = 20;
	
		int HP_PotionPrice = 50, MP_PotionPrice = 50, GHP_PotionPrice = 150, GMP_PotionPrice = 150, antidotePrice = 150, bandagePrice = 150;
	
		//��
		int Shield = 10, Armor = 15, helmet = 10, boots = 5, Robe = 8;

		// ���� ���� 
		//Axe���� ���ݽ� ���� Ȯ���� ���� �극��ũ, GreateAxe�� �� ū Ȯ���� ���� �극��ũ
		//Sword �÷��̾ attack �ҽ� ���� Ȯ���� ����� ������ ���, LongSword�� �� ū Ȯ���� ��� 
		int GreateAxe = 20, Axe = 10, LongSword = 14, Sword = 7, Spear = 13, clip = 9, Degar = 5, MroningStar = 8;
	
		// ���Ÿ� ����
		int Bow = 50, ThrowKnife = 20;
	
		// ����
		int HP_Potion = 50, MP_Potion = 30, GHP_Potion = 75, GMP_Potion = 45, antidote, bandage ;
		/*
		const int armorSize = 5;
		const int WeaponSize = 8;
		const int RangeWeaponSize = 3;
		const int ExpendablesSize = 6;

		vector<shop> armor(armorSize);
		vector<shop> armor(WeaponSize);
		vector<shop> armor(RangeWeaponSize);
		vector<shop> armor(ExpendablesSize);
		*/
		const shop armor[5] = { {"Shield : ",ShieldPrice, Gold},{"Armor : ",ArmorPrice, Gold},{"helmet : ",helmetPrice, Gold},
						  {"boots : ",bootsPrice, Gold}, {"robe : ",RobePrice, Gold} };

		const shop Weapon[8] = { {"GreateAxe : ",GreateAxePrice, Gold},{"Axe : ", AxePrice, Gold},{"LongSword : ", LongSwordPrice, Gold},{"Sword : ", SwordPrice, Gold},
						  {"Spear : ", SpearPrice ,Gold},{"clip : ", clipPrice, Gold},{"Degar : ", DegarPrice, Gold},{"MroningStar : ", MroningStarPrice, Gold} };

		const shop RangeWeapon[3] = { {"Bow : ",BowPrice, Gold}, {"ThrowKnife : ", ThrowKnifePrice , Gold} };

		const shop Expendables[6] = { {"HealingPotion : ", HP_PotionPrice,  Gold},{"ManaPotion : ", MP_PotionPrice, Gold},
								{"GreateHealingPotion : ", GHP_PotionPrice, Gold},{"GreateManaPotion : ", GMP_PotionPrice, Gold},
								{"antidote : ",antidotePrice, Gold},{"bandage : ", bandagePrice, Gold} };


		int ArmorSize = (sizeof(armor) / sizeof(*armor));
		int WeaponSize = (sizeof(Weapon) / sizeof(*Weapon));
		int RangeWeaponSize = (sizeof(RangeWeapon) / sizeof(*RangeWeapon));
		int ExpendablesSize = (sizeof(Expendables) / sizeof(*Expendables));
		
		int equipmentChoice = 0;
		
		cout << "Welcome to the shop.Decide what type of equipment to look at" << endl;
		cout << "1. Armor" << endl << "2. weapon" << endl << "3. Range Weapon" << endl << "4. Expendables" << endl;
			
=======
	string Gold = "G";
	int ShieldPrice = 150, ArmorPrice = 200, helmetPrice = 135, bootsPrice = 125, RobePrice = 170;

	int GreateAxePrice = 250, AxePrice = 140, LongSwordPrice = 200 , SwordPrice = 110, SpearPrice = 130, clipPrice = 125, DegarPrice = 100, MroningStarPrice = 135;
	
	int BowPrice = 150, ThrowKnifePrice = 20;
	
	int HP_PotionPrice = 50, MP_PotionPrice = 50, GHP_PotionPrice = 150, GMP_PotionPrice = 150, antidotePrice = 150, bandagePrice = 150;
	
	//방어�?
	int Shield = 10, Armor = 15, helmet = 10, boots = 5, Robe = 8;

	// 근접 무기 
	//Axe?�고 공격???�정 ?�률�?가??브레?�크, GreateAxe???????�률�?가??브레?�크
	//Sword ?�레?�어가 attack ?�시 ?�정 ?�률�??��???공격??방어, LongSword???????�률�?방어 
	int GreateAxe = 20, Axe = 10, LongSword = 14, Sword = 7, Spear = 13, clip = 9, Degar = 5, MroningStar = 8;
	
	// ?�거�?무기
	int Bow = 50, ThrowKnife = 20;
	
	// ?�션
	int HPpotion = 50, MPpotion = 30, GHPpotion = 75, GMPpotion = 45, antidote, bandage ;

	const shop armor[5] = { {"Shield : ",ShieldPrice, Gold},{"Armor : ",ArmorPrice, Gold},{"helmet : ",helmetPrice, Gold},
					  {"boots : ",bootsPrice, Gold}, {"robe : ",RobePrice, Gold} };

	const shop Weapon[8] = { {"GreateAxe : ",GreateAxePrice, Gold},{"Axe : ", AxePrice, Gold},{"LongSword : ", LongSwordPrice, Gold},{"Sword : ", SwordPrice, Gold},
					  {"Spear : ", SpearPrice ,Gold},{"clip : ", clipPrice, Gold},{"Degar : ", DegarPrice, Gold},{"MroningStar : ", MroningStarPrice, Gold} };

	const shop RangeWeapon[3] = { {"Bow : ",BowPrice, Gold}, {"ThrowKnife : ", ThrowKnifePrice , Gold} };

	const shop Expendables[6] = { {"HealingPotion : ", HP_PotionPrice,  Gold},{"ManaPotion : ", MP_PotionPrice, Gold},
							{"GreateHealingPotion : ", GHP_PotionPrice, Gold},{"GreateManaPotion : ", GMP_PotionPrice, Gold},
							{"antidote : ",antidotePrice, Gold},{"bandage : ", bandagePrice, Gold} };


	int ArmorSize = (sizeof(armor) / sizeof(*armor));
	int WeaponSize = (sizeof(Weapon) / sizeof(*Weapon));
	int RangeWeaponSize = (sizeof(RangeWeapon) / sizeof(*RangeWeapon));
	int ExpendablesSize = (sizeof(Expendables) / sizeof(*Expendables));
	
	int equipmentChoice = 0;
	if(MenuChoice == 2)
	{
		cout << "Welcome to the shop.Decide what type of equipment to look at" << endl;
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
		cin >> equipmentChoice;

		if (equipmentChoice == 1)
		{
			for(int i = 0 ; i < ArmorSize; i++)
			{
				for (auto const& value : armor)
<<<<<<< HEAD
						cout << "what armor do you buy" << endl;
						cout << i << " : " << armor[i].iName << endl;
						cout << endl;
=======
					cout << "what armor do you buy" << endl;
					cout << i << " : " << armor[i] << endl;
					cout << endl;
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
			}
			
		}
		if (equipmentChoice == 2)
		{
			for (int i = 0; i < WeaponSize; i++)
			{
				for (auto const& value : Weapon)
					cout << "what weapon do you buy" << endl;
<<<<<<< HEAD
					cout << i << " : " << Weapon[i].iName << endl;
=======
				    cout << i << " : " << Weapon[i] << endl;
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
					cout << endl;
			}
	 
		}
		if (equipmentChoice == 3)
		{
			for (int i = 0; i < RangeWeaponSize; i++)
			{
				for (auto const& value : RangeWeapon)
					cout << "what range weapon do you buy" << endl;
<<<<<<< HEAD
					cout << i << " : " << RangeWeapon[i].iName << endl;
=======
					cout << i << " : " << RangeWeapon[i] << endl;
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
					cout << endl;
			}

		}
		if (equipmentChoice == 4)
		{
			for (int i = 0; i < ExpendablesSize; i++)
			{
				for (auto const& value : Expendables)
					cout << "what Expendables do you buy" << endl;
<<<<<<< HEAD
					cout << i << " : " << Expendables[i].iName << endl;
=======
					cout << i << " : " << Expendables[i] << endl;
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
					cout << endl;
			}

		}
	}

<<<<<<< HEAD
	


};

=======
}  
>>>>>>> bd022b06005541b82a8f33b2c9fb5b9977bf0e9a
