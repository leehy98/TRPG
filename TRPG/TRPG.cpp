#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

// 직군 스탯 
void warrior(double* warriorHP, double* warriorMP, double* warriorAD, double* warriorAP, double* warriorDEF)
{
	*warriorHP = 250;
	*warriorMP =  50;
	*warriorAD =  40;
	*warriorAP =  15;
	*warriorDEF = 30;
}
void Wizard(double* WizardHP, double* WizardMP, double* WizardAD, double* WizardAP, double* WizardDEF)
{
	*WizardHP = 150;
	*WizardMP = 250;
	*WizardAD = 15;
	*WizardAP = 100;
	*WizardDEF = 15;
}
void prist(double* pristHP, double* pristMP, double* pristAD, double* pristAP, double* pristDEF)
{
	*pristHP = 175,
	* pristMP = 150,
	* pristAD = 25,
	* pristAP = 50,
	* pristDEF = 20;
}
void vagabond(double* vagabondHP, double* vagabondMP, double* vagabondAD, double* vagabondAP, double* vagabondDEF)
{
	*vagabondHP = 155;
	*vagabondMP = 130;
	*vagabondAD = 50;
	*vagabondAP = 35;
	*vagabondDEF = 25;
}
// 몬스터 스탯
void slime(int* slimeHP, int* slimeAD, int* slimeDEF)
{
	*slimeHP = 100;
	*slimeAD = 10;
	*slimeDEF = 3;
}
void goblin(int* goblinHP, int* goblinAD, int* goblinDEF)
{
	*goblinHP = 150;
	*goblinAD = 25;
	*goblinDEF = 5;
}
void lizardMan(int* lizardManHP, int* lizardManAD, int* lizardManDEF)
{
	*lizardManHP = 270;
	*lizardManAD = 35;
	*lizardManDEF = 15;
}
void testmonster(int* testmonsterHP, int* testmonsterAD, int* _testmonsterDEF)
{
	*testmonsterHP = 270;
	*testmonsterAD = 35;
	*_testmonsterDEF = 15;
}
// 떨구는 템 및 골드 량 
void slimeDropItem(int* slimeGold, int* stickyGel)
{
	*slimeGold = 50;
	*stickyGel = 1;
}
void goblinDropItem(int* goblinGold, int* goblinEar)
{
	*goblinGold = 75;
	*goblinEar = 1;
}
void lizardManDropItem(int* lizardManGold, int*lizardManTooth)
{
	*lizardManGold = 100;
	*lizardManTooth = 1;
}

string C1ass, monster, MonsterDropItem;
int gold = 0;
int stickyGel = 0;
int goblinEar = 0;
int lizardManTooth = 0;
// 플레이어 초기값
double playerHP = 0, playerMP = 0, playerAD = 0, playerAP = 0, playerDEF = 0;

//몬스터 초기값
int monsterHP = 10, monsterAD = 10, monsterDEF = 10;

//플레이어와 몬스터의 행동 변수 
int playerSelect = 0, monsterSelect = 0;


int ChoiceClass()
{
	int choice = 0;

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
}
int choiceMonster()
{
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

}
int fightSystem()
{
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

			if (monster == "slime")
			{
				slimeDropItem(&gold, &stickyGel);
			}
			if (monster == "goblin")
			{
				goblinDropItem(&gold, &goblinEar);
			}
			if (monster == "lizardMan")
			{
				lizardManDropItem(&gold, &lizardManTooth);
			}
			break;
		}

	}
}
class TRPG 
{
	double main()
	{

		srand(unsigned(time(NULL)));

		// 게임 시작
		ChoiceClass();
		choiceMonster();
		fightSystem();
	}

};

	






