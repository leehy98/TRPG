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
	// �ش� ��Ʈ�� status�� ��Ʈ ����
	status |= HUNGRY;
	status |= SLEEP;
	status |= TIRED;
	//Ư�� �ڸ� ��Ʈ�� ���� 
	status &= ~HUNGRY;
	while(status)
	{	
		// ���� Ȯ�� 
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