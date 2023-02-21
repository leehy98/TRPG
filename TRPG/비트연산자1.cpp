#include <iostream>
#define HUNGRY	   0x01
#define SLEEP	   0x02
#define	TIRED      0x04
#define ACHE	   0x08
#define OPPRESSION 0x10

using namespace std;

int main()
{
	int status = 0;
	int HP = 100;
	// 해당 비트를 status에 비트 연삼
	status |= HUNGRY;
	status |= SLEEP;
	status |= TIRED;
	//특정 자리 비트를 제거 
	status &= ~HUNGRY;
	while(status)
	{	
		// 상태 확인 
		if(status & HUNGRY)
		{
			HP -= 1;
		
		}
		if(HP < 1)
		{
			break;
		}
	}
	cout << HP;
}