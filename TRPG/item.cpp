#include "item.h"

Item::Item() : Price(0)
{

};
Item::~Item()
{

};
int Item::getPrice() {};
void Item::setPrice(int p) {};

Weapon::Weapon() :Damage(0)
{

};
Weapon::~Weapon()
{

};

int Weapon::getDamage() {};
void Weapon::setDamage(int w) {};

Armor::Armor() : Defence(0)
{

};
Armor::~Armor()
{

};

int Armor::getDefence() {};
void Armor::setDefence(int d) {};

Expendables::Expendables() : Revocery(0)
{

};
Expendables::~Expendables()
{

};

int Expendables::getRevocery() {};
void Expendables::setRevocery(int r) {};

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
