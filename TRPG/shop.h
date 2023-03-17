#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include <vector>
#include"item.h"
// i��° �������� ����� ���� �ϰ� �Ǹ� <vector>inventory �� push �ϰ� �ȰԵǸ� 
// ������ ������ 50%�� �����ް� �ش� index �� erase �ϵ��� �� ����
// �� ������ �����ͷ� ������ �ּҰ��� �����ͼ� �Ҵ��ϴ°� ���� ������� ���δ� 
//�����Ϳ� ������ ��� ������ �ּҸ� �����ϴ� ����Դϴ�.������ �� ���� ����� �� ���� �߿��� �������� �ֽ��ϴ�.
//
//�����ʹ� nullptr�� �ʱ�ȭ�� �� ������ ������ �ʱ�ȭ���� ���� ���·� �������� �� �����ϴ�.
//�����ʹ� �ٸ� ������ �ּҸ� ����Ű���� ����� �� ������ ������ �� �� �ʱ�ȭ�Ǹ� �ٸ� ������ ������ �� �����ϴ�.
//���� �����Ϳ� ���� �� � ���� ��������� ��Ȳ�� ���� �����ؾ� �մϴ�.
//
//������ �ۼ��� Shop Ŭ������ ��� Item Ŭ������ ��ü���� �������� �����ϰ� ������ ���ɼ��� �ֱ� ������ �����͸� ����ϴ� ���� �����ϴ�.���� ��ü���� �������� �����ȴٸ� ������ ����ϴ� �͵� ���� ������ �� �ֽ��ϴ�.

class shop
{
public:
	std::string iname;
	int iprice;
	shop(const std::string& name, int price);
	~shop();
	int ShopMain();

protected:
	std::vector<shop>Weapon();
	std::vector<shop>Armor();
	std::vector<shop>RangeWeapon();
	std::vector<shop>Expendables();
};

class Buy_Item : public shop
{
public:
	Buy_Item();
	~Buy_Item();
	int setbuy_Item();
	void getbuy_Item(int buy);
private:

};
class Sell_Item : public shop
{
public:
	Sell_Item();
	~Sell_Item();
	int setSell_Item();
	void getSell_Item(int sell);
private:

};

#endif 

