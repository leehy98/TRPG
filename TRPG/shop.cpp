#include <iostream>
#include <string>
using namespace std;
struct shop
{
	string iName;
	int iPrice;
	string gold;
};
int ShopMain()
{
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
	int HPpotion = 50, MPpotion = 30, GHPpotion = 75, GMPpotion = 45, antidote, bandage ;

	shop armor[5] = { {"Shield : ",ShieldPrice, Gold},{"Armor : ",ArmorPrice, Gold},{"helmet : ",helmetPrice, Gold},
					  {"boots : ",bootsPrice, Gold}, {"robe : ",RobePrice, Gold} };

	shop wepon[8] = { {"GreateAxe : ",GreateAxePrice, Gold},{"Axe : ", AxePrice, Gold},{"LongSword : ", LongSwordPrice, Gold},{"Sword : ", SwordPrice, Gold},
					  {"Spear : ", SpearPrice ,Gold},{"clip : ", clipPrice, Gold},{"Degar : ", DegarPrice, Gold},{"MroningStar : ", MroningStarPrice, Gold} };

	shop rangeWeapon[3] = { {"Bow : ",BowPrice, Gold}, {"ThrowKnife : ", ThrowKnifePrice , Gold} };

	shop expendables[6] = { {"HealingPotion : ", HP_PotionPrice,  Gold},{"ManaPotion : ", MP_PotionPrice, Gold},
							{"GreateHealingPotion : ", GHP_PotionPrice, Gold},{"GreateManaPotion : ", GMP_PotionPrice, Gold},
							{"antidote : ",antidotePrice, Gold},{"bandage : ", bandagePrice, Gold} };


	int ArmorSize = (sizeof(armor) / sizeof(*armor));
	int WeaponSize = (sizeof(wepon) / sizeof(*wepon));
	int RangeWeaponSize = (sizeof(rangeWeapon) / sizeof(*rangeWeapon));
	int ExpendablesSize = (sizeof(expendables) / sizeof(*expendables));

	int equipmentChoice = 0;
	if(MenuChoice == 2)
	{
		cout << "Welcome to the shop.Decide what type of equipment to look at";
		cin >> equipmentChoice;
		if (equipmentChoice == 1)
		{
			for(int i = 0 ; i < ArmorSize; i++)
			{
				
			}
			
		}
		if (equipmentChoice == 1)
		{
			for (int i = 0; i < WeaponSize; i++)
			{

			}
			 
		}
		if (equipmentChoice == 1)
		{
			for (int i = 0; i < RangeWeaponSize; i++)
			{

			}

		}
		if (equipmentChoice == 1)
		{
			for (int i = 0; i < ExpendablesSize; i++)
			{

			}

		}
	}

}  