#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Player.h"
#include "Skill.h"
#include "MonsterValue.h"
#include "goblin.h"
#include "slime.h"
#include "lizardMan.h"
#include "ClassStats.h"

using namespace std;

string Class, monster, MonsterDropItem;

int gold = 0;
int stickyGel = 0;
int goblinEar = 0;
int lizardManTooth = 0;

int battleSystem(int battle)
{
	//플레이어와 몬스터의 행동 변수 
	int playerSelect = 0, monsterSelect = 0;

	int choiceClass = 0;

	cout << "choicee your Class." << endl;
	cout << "Hidden selection when entering a specific number" << endl;
	cout << "1. warrior" << endl;
	cout << "2. wizard" << endl;
	cout << "3. prist" << endl;
	cin >> choiceClass;

	if (choiceClass == 1)
	{
		Class = "warrior";
		warrior(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
		cout << "choose warrior." << endl << endl;
	}
	else if (choiceClass == 2)
	{
		Class = "wizard";
		wizard(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
		cout << "choose wizard." << endl << endl;
	}
	else if (choiceClass == 3)
	{
		Class = "prist";
		prist(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
		cout << "choose prist." << endl << endl;
	}
	// 히든
	else if (choiceClass == 100)
	{
		Class = "vagabond";
		vagabond(&playerHP, &playerMP, &playerAD, &playerAP, &playerDEF);
		cout << "choose hidden CLASS, vagabond." << endl << endl;
	}

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

	srand(unsigned(time(NULL)));

	// 게임 시작
	system("cls");
	while (true)
	{
		cout << "class : " << Class << "      " << monster << " : monster" << endl;;
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
		if (playerSelect == 3)
		{

		}
		if (playerSelect == 4)
		{
			cout << "you got scared and ran away." << endl;
			break;

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
			cout << "player win" << endl;
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
			/*cout << "gold : " << gold << endl;
			cout << "drop item : " << stickyGel << endl;*/
			break;
		}

	}
	return 0;
}