#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <string>
#include <vector>
#include"item.h"
// i번째 아이템을 사려고 선택 하게 되면 <vector>inventory 로 push 하고 팔게되면 
// 아이템 가격의 50%를 돌려받고 해당 index 는 erase 하도록 할 예정
// 이 게임은 포인터로 아이템 주소값을 가져와서 할당하는게 좋은 방법으로 보인다 
//포인터와 참조는 모두 변수의 주소를 저장하는 방법입니다.하지만 두 가지 방법은 몇 가지 중요한 차이점이 있습니다.
//
//포인터는 nullptr로 초기화될 수 있지만 참조는 초기화되지 않은 상태로 남아있을 수 없습니다.
//포인터는 다른 변수의 주소를 가리키도록 변경될 수 있지만 참조는 한 번 초기화되면 다른 변수를 참조할 수 없습니다.
//따라서 포인터와 참조 중 어떤 것을 사용할지는 상황에 따라 결정해야 합니다.
//
//위에서 작성한 Shop 클래스의 경우 Item 클래스의 객체들을 동적으로 생성하고 삭제할 가능성이 있기 때문에 포인터를 사용하는 것이 좋습니다.만약 객체들이 정적으로 생성된다면 참조를 사용하는 것도 좋은 선택일 수 있습니다.

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

