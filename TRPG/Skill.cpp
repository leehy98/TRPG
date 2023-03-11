#include "Skill.h"
#include <iostream>
using namespace std;

class Skill
{
	void warriorSkill(int bash)
	{
		int bashDamage = 50;
		//bash = _bashDamage + (warriorAD / 3);
	}
	void wizardSKill(int magicMissle)
	{
		int magicMissleDamage = 30;
		//magicMissle = magicMissleDamage + (wizardAP / 7);
	}
	void pristSkill(int holyStrike)
	{
		int holyStrikeDamage = 20;
		//holyStrike = holyStrikeDamage + (pristAP / 3 + (pristAD / 5));
	}
	void vagabondSKill(int slash)
	{
		int _slashDamage = 100;
		//slash = slashDamage + (vagabondAD/70);
	}
};
