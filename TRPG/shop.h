#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include <vector>
#include"item.h"
// i번째 아이템을 사려고 선택 하게 되면 <vector>inventory 로 push 하고 팔게되면 
// 아이템 가격의 50%를 돌려받고 해당 index 는 erase 하도록 할 예정
// 이 게임은 포인터로 아이템 주소값을 가져와서 할당하는게 좋은 방법으로 보인다 
class item
{
private:
	std::string iname;
	int iprice{};

public:

	item(const std::string& name, int price);
	~item();
};

class shop
{
public:
	shop();
	~shop();
	int ShopMain();

private:
	vector<item>Weapon();
	vector<item>Armor();
	vector<item>RangeWeapon();
	vector<item>Expendables();
};

class buy_Item
{
public:
	buy_Item();
	~buy_Item();
};
class sell_Item
{
public:
	sell_Item();
	~sell_Item();
};

#endif 

