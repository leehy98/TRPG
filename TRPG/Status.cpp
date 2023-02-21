#include<iostream>
#define Bleeding   0x001
#define Poison	   0x002

using namespace std;
int mainStatus()
{
	int count = 10;
	int Status = 0;
	
	for (int i = 0; i < count; i++) 
	{
		if (monster == "goblin" && playerHP--)
		{
			cout << "Addicted! drink antidote!" << endl;
			Status |= Poison;
			playerHP -= 1;
			if (useItem == "antidote")
			{
				cout << "I took the antidote. has been detoxified" << endl;
				Status &= ~Poison;
				
			}
		}
	}
	for(int i = 0; i < count; i++)
	{
		if (monster == "lizardMan" && playerHP--)
		{
			Status |= Bleeding;
			playerHP -= 1;
			cout << "bleeding! Put on a bandage!" << endl;
			if (useItem == "bandage")
			{
				cout << "bandaged up The bleeding has stopped." << endl;
				Status &= ~Bleeding;
			}
		}
	}
	return 0;
}

