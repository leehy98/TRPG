#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
extern struct item
{
	std::string iName;
	int iPrice{};
	std::string gold;
};

extern class Store
{
public:
	Store(int a);
	~Store();
	int ShopMain();
	
		
private:
	item Armor[5];
	item Weapon[8];
	item RangeWeapon[3];
	item Expendables[6];

	
};

class Buy_Item;
class SEll_Item;

#endif 

