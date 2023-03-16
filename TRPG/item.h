#ifndef ITEM_H
#define ITEM_H


class Item
{
public:
	Item();
	~Item();
	int getPrice();
	void setPrice(int p);
protected:
	int Price;
};

class Weapon : public Item
{
public:
	Weapon();
	~Weapon();
	int getDamage();
	void setDamage(int d);
protected:
	int Damage;
};

class Expendables : public Item
{
public:
	Expendables();
	~Expendables();
	int getRevocery();
	void setRevocery(int r);
protected:
	int Revocery;
};

class Armor : public Item
{
public:
	Armor();
	~Armor();
	int getDefence();
	void setDefence(int d);
protected:
	int Defence;
};

class Shield : public Armor
{
public:
	Shield();
	~Shield();
};

class armor : public Armor
{
public:
	armor();
	~armor();

};

class Helmet : public Armor
{
public:
	Helmet();
	~Helmet();

};

class Boots : public Armor
{
public:
	Boots();
	~Boots();

};

class Robe : public Armor
{
public:
	Robe();
	~Robe();

};

class GreateAxe : public Weapon
{
public:
	GreateAxe();
	~GreateAxe();

};

class Axe : public Weapon
{
public:
	Axe();
	~Axe();

};

class Longsword : public Weapon
{
public:
	Longsword();
	~Longsword();

};

class Sword : public Weapon
{
public:
	Sword();
	~Sword();

};

class Spear : public Weapon
{
public:
	Spear();
	~Spear();

};

class Clip : public Weapon
{
public:
	Clip();
	~Clip();

};

class HP_potion : public Expendables
{
public:
	HP_potion();
	~HP_potion();

};

class MP_potion : public Expendables
{
public:
	MP_potion();
	~MP_potion();

};

class GHP_potion : public Expendables
{
public:
	GHP_potion();
	~GHP_potion();

};

class GMP_ption : public Expendables
{
public:
	GMP_ption();
	~GMP_ption();

};

class Antidote : public Expendables
{
public:
	Antidote();
	~Antidote();

};

class Bandage : public Expendables
{
public:
	Bandage();
	~Bandage();

};

#endif 

