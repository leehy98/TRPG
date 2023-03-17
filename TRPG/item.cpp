#include "item.h"

// Item
Item::Item() : Price(0)
{
	Price = 0;
};
Item::~Item()
{
	
};
int Item::getPrice() 
{
	return Price;
};
void Item::setPrice(int p) 
{

};

// Weapon
Weapon::Weapon() :Damage(0)
{
	Damage = 0;
};
Weapon::~Weapon()
{

};
int Weapon::getDamage() 
{
	return Damage;
};
void Weapon::setDamage(int w) {};


// Armor
Armor::Armor() : Defence(0)
{
	Defence = 0;
};
Armor::~Armor()
{

};
int Armor::getDefence() 
{
	return Defence;
};
void Armor::setDefence(int d) {};


// Expendables
Expendables::Expendables() : Recovery(0)
{
	Recovery = 0;
};
Expendables::~Expendables()
{

};
int Expendables::getRecovery() 
{
	return Recovery;
};
void Expendables::setRecovery(int r) 
{


};

Shield::Shield() {};
Shield::~Shield() {};

armor::armor() {};
armor::~armor() {};

Helmet::Helmet() {};
Helmet::~Helmet() {};

Boots::Boots() {};
Boots::~Boots() {};

Robe::Robe() {};
Robe::~Robe() {};

GreateAxe::GreateAxe() {};
GreateAxe::~GreateAxe() {};

Axe::Axe() {};
Axe::~Axe() {};

Longsword::Longsword() {};
Longsword::~Longsword() {};

Sword::Sword() {};
Sword::~Sword() {};

Spear::Spear() {};
Spear::~Spear() {};

Clip::Clip() {};
Clip::~Clip() {};

HP_potion::HP_potion() {};
HP_potion::~HP_potion() {};

MP_potion::MP_potion() {};
MP_potion::~MP_potion() {};

GHP_potion::GHP_potion() {};
GHP_potion::~GHP_potion() {};

GMP_ption::GMP_ption() {};
GMP_ption::~GMP_ption() {};

Antidote::Antidote() {};
Antidote::~Antidote() {};

Bandage::Bandage() {};
Bandage::~Bandage() {};
