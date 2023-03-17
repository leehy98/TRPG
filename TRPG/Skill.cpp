#include <iostream>
#include "Skill.h"
#include "Player.h"

using namespace std;

void warriorSkill()
{
	int bashDamage = 50;
	double bash = bashDamage + (playerAD / 3);
	
}
void wizardSKill()
{
	int magicMissleDamage = 30;
	double magicMissle = magicMissleDamage + (playerAP / 7);
}
void pristSkill()
{
	int holyStrikeDamage = 20;
	double holyStrike = holyStrikeDamage + (playerAP / 3 + (playerAD / 5));
}
void vagabondSKill()
{
	int slashDamage = 100;
	double slash = slashDamage + (playerAD/70);
}
