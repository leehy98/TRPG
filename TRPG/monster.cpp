#include "Monster.h"

 int MonsterStats()
{
	int monsterHP = 10, monsterAD = 10, monsterDEF = 10;
	return 0;
}
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
 void testmonster(int* testmonsterHP, int* testmonsterAD, int* testmonsterDEF)
{
	*testmonsterHP = 99999;
	*testmonsterAD = 1;
	*testmonsterDEF = 99;
}