#include<iostream>
#include"player.h"
#include"MonsterValue.h"
#include "main.h"

#define Bleeding   0x001
#define Poison	   0x002
// Player.cpp에 있는 상태이상 해제는 이쪽에서 구현
using namespace std;



int status()
{
	int count = 10;
	int status = 0;
	for (int i = 0; i < count; i++)
	{
		if (monster == "goblin" && playerHP--)
		{
			cout << "Addicted! drink antidote!" << endl;
			status |= Poison;
			playerHP -= 1;
			if (useItem == "antidote")
			{
				cout << "I took the antidote. has been detoxified" << endl;
				status &= ~Poison;
				
			}
		}
	}
	for(int i = 0; i < count; i++)
	{
		if (monster == "lizardMan" && playerHP--)
		{
			status |= Bleeding;
			playerHP -= 1;
			cout << "bleeding! Put on a bandage!" << endl;
			if (useItem == "bandage")
			{
				cout << "bandaged up. The bleeding has stopped." << endl;
				status &= ~Bleeding;
			}
		}
	}
	return 0;
}

