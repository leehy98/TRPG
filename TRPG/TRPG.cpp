#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

// 직군 스탯 
void warrior(double* _warriorHP, double* _warriorMP, double* _warriorAD, double* _warriorAP, double* _warriorDEF)
{
	*_warriorHP = 250;
	*_warriorMP =  50;
	*_warriorAD =  40;
	*_warriorAP =  15;
	*_warriorDEF = 30;
}
void Wizard(double* _WizardHP, double* _WizardMP, double* _WizardAD, double* _WizardAP, double* _WizardDEF)
{
	*_WizardHP = 150;
	*_WizardMP = 250;
	*_WizardAD = 15;
	*_WizardAP = 100;
	*_WizardDEF = 15;
}
void prist(double* _pristHP, double* _pristMP, double* _pristAD, double* _pristAP, double* _pristDEF)
{
	*_pristHP = 175,
	* _pristMP = 150,
	* _pristAD = 25,
	* _pristAP = 50,
	* _pristDEF = 20;
}
void vagabond(double* _vagabondHP, double* _vagabondMP, double* _vagabondAD, double* _vagabondAP, double* _vagabondDEF)
{
	*_vagabondHP = 155;
	*_vagabondMP = 130;
	*_vagabondAD = 50;
	*_vagabondAP = 35;
	*_vagabondDEF = 25;
}
// 몬스터 스탯
void slime(int* _slimeHP, int* _slimeAD, int* _slimeDEF)
{
	*_slimeHP = 100;
	*_slimeAD = 10;
	*_slimeDEF = 3;
}
void goblin(int* _goblinHP, int* _goblinAD, int* _goblinDEF)
{
	*_goblinHP = 150;
	*_goblinAD = 25;
	*_goblinDEF = 5;
}
void lizardMan(int* _lizardManHP, int* _lizardManAD, int* _lizardManDEF)
{
	*_lizardManHP = 270;
	*_lizardManAD = 35;
	*_lizardManDEF = 15;
}
void testmonster(int* _testmonsterHP, int* _testmonsterAD, int* _testmonsterDEF)
{
	*_testmonsterHP = 270;
	*_testmonsterAD = 35;
	*_testmonsterDEF = 15;
}
// 떨구는 템 및 골드 량 
void slimeDropItem(int *_slimeGold)
{
	*_slimeGold = 50;
}
void goblinDropItem(int* _goblinGold)
{
	*_goblinGold = 75;
}
void lizardManDropItem(int* _lizardManGold)
{
	*_lizardManGold = 100;
}
class TRPG 
{
	double main()
	{
		string C1ass, monster, MonsterDropItem;
		int gold = 0;

		// 플레이어 초기값
		double playerHP = 0, playerMP = 0, playerAD = 0, playerAP = 0, playerDEF = 0;

		//몬스터 초기값
		int monsterHP = 10, monsterAD = 10, monsterDEF = 10;

		//플레이어와 몬스터의 행동 변수 
		int playerSelect = 0, monsterSelect = 0;

		//직업 선택 
		double choice = 0;

		cout << "choose your Class." << endl;
		cout << "Hidden selection when entering a specific number" << endl;
		cout << "1. warrior" << endl;
		cout << "2. wizard" << endl;
		cout << "3. prist" << endl;
		cin >> choice;

		if (choice == 1)
		{
			C1ass = "warrior";
			warrior(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
			cout << "choose warrior." << endl << endl;
		}
		else if (choice == 2)
		{
			C1ass = "wizard";
			Wizard(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
			cout << "choose wizard." << endl << endl;
		}
		else if (choice == 3)
		{
			C1ass = "prist";
			prist(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
			cout << "choose prist." << endl << endl;
		}
		// 히든
		else if (choice == 100)
		{
			C1ass = "vagabond";
			vagabond(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
			cout << "choose hidden CLASS, vagabond." << endl << endl;
		}

		//몬스터 선택
		int choiceMonster = 0;
		system("cls");
		cout << "Choose a monster to fight." << endl;
		cout << "1. slime" << endl;
		cout << "2. goblin" << endl;
		cout << "3. lizardMan" << endl;
		cin >> choiceMonster;

		if (choiceMonster == 1)
		{
			monster = "slime";
			cout << "The monsters you will fight are slimes." << endl;
			slime(&monsterHP, &monsterAD, &monsterDEF);
		}
		if (choiceMonster == 2)
		{
			monster = "goblin";
			cout << "The monsters you will fight are goblins." << endl;
			goblin(&monsterHP, &monsterAD, &monsterDEF);
		}
		if (choiceMonster == 3)
		{
			monster = "lizardMan";
			cout << "The monsters you will fight are lizardMans." << endl;
			lizardMan(&monsterHP, &monsterAD, &monsterDEF);
		}
		if (choiceMonster == 999)
		{
			cout << "The monsters you will fight are testMonsters." << endl << endl;
			testmonster(&monsterHP, &monsterAD, &monsterDEF);
		}

		srand(unsigned(time(NULL)));

		// 게임 시작
		system("cls");
		while (true)
		{
			cout << "class : " << C1ass << "      " << monster << " : monster" << endl;;
			cout << "playerHP : " << playerHP << "       " << monsterHP << " : monsterHP" << endl;
			cout << "1 . Attack" << endl;
			cout << "2 . Defence" << endl;
			//  cout << "3 . Skill" << endl;
			//	cout << "4. run" << endl;
			cout << endl;
			cin >> playerSelect;
			monsterSelect = rand() % 2 + 1;

			//전투 시스템
			if (playerSelect == 1)
			{
				cout << "player Attack" << endl;
				monsterHP -= (playerAD - monsterDEF / 5);
			}
			if (playerSelect == 2)
			{
				if (monsterSelect == 1)
				{
					cout << "player Defence" << endl;
					playerDEF += playerDEF;
				}
			}
			if (monsterSelect == 1)
			{
				cout << "monster Attack" << endl;
				playerHP -= (monsterAD - playerDEF / 5);
			}
			if (monsterSelect == 2)
			{
				if (playerSelect == 1)
				{
					cout << "monster Defence" << endl;
					monsterDEF += monsterDEF;
				}
			}
			if (playerHP < 1)
			{
				cout << "player failed." << endl;

				break;
			}
			if (monsterHP < 1)
			{
				cout << "monster failed." << endl;

				if(monster == "slime")
				{
					slimeDropItem(&gold);
				}
				if (monster == "goblin")
				{
					goblinDropItem(&gold);
				}
				if (monster == "lizardMan")
				{
					lizardManDropItem(&gold);
				}
				break;
			}

		}

	}

};

	






