#include "Skill.h"
#include <iostream>
using namespace std;

void warriorSkill(int* _bash)
{
	int _bashDamage = 50;
	_bash = _bashDamage + (warriorAD / 3);
}
void wizardSKill(int* _magicMissle)
{
	int _magicMissleDamage = 30;
	_magicMissle = _magicMissleDamage + (wizardAP / 7);
}
void pristSkill(int* _holyStrike)
{
	int _holyStrikeDamage = 20;
	_holyStrike = _holyStrikeDamage + (pristAP / 3 + (pristAD / 5));
}
void vagabondSKill(int* _slash)
{
	int _slashDamage = 100;
	_slash = _slashDamage + (vagabondAD/70);
}