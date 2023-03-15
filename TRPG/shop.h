#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include <vector>
#include"item.h"
// i��° �������� ����� ���� �ϰ� �Ǹ� <vector>inventory �� push �ϰ� �ȰԵǸ� 
// ������ ������ 50%�� �����ް� �ش� index �� erase �ϵ��� �� ����
// �� ������ �����ͷ� ������ �ּҰ��� �����ͼ� �Ҵ��ϴ°� ���� ������� ���δ� 
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

