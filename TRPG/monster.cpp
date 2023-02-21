#include "Monster.h"

static int MonsterStats()
{
	int monsterHP = 10, monsterAD = 10, monsterDEF = 10;
	return 0;
}
static void slime(int* _slimeHP, int* _slimeAD, int* _slimeDEF)
{
	*_slimeHP = 100;
	*_slimeAD = 10;
	*_slimeDEF = 3;
}
static void goblin(int* _goblinHP, int* _goblinAD, int* _goblinDEF)
{
	*_goblinHP = 150;
	*_goblinAD = 25;
	*_goblinDEF = 5;
}
static void lizardMan(int* _lizardManHP, int* _lizardManAD, int* _lizardManDEF)
{
	*_lizardManHP = 270;
	*_lizardManAD = 35;
	*_lizardManDEF = 15;
}
static void testmonster(int* _testmonsterHP, int* _testmonsterAD, int* _testmonsterDEF)
{
	*_testmonsterHP = 270;
	*_testmonsterAD = 35;
	*_testmonsterDEF = 15;
}