// 9858045.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int lottery[] = {3,7,9,10,12,14};
	int a[6],i,ans=0;
	do
	{
		cout<<"�п�J6�X�U�`�G"<<endl;
		for(int i=0;i<6;i++)
		{
			cin>>a[i];
			while(a[i]<=0||a[i]>42)
			{
				cout<<"�W�L�d��A�d��O0-42�A�Э��s�U�`�I"<<endl;
				cin>>a[i];
			}
		}
		if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[0]==a[4]||a[0]==a[5]
			||a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[1]==a[5]
			||a[2]==a[3]||a[2]==a[4]||a[2]==a[5]
			||a[3]==a[4]||a[3]==a[5]||a[4]==a[5])
			{
				cout<<"�����Ƹ��X�A�Э��s�U�`�I"<<endl;
			}
	}while(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[0]==a[4]||a[0]==a[5]
			||a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[1]==a[5]
			||a[2]==a[3]||a[2]==a[4]||a[2]==a[5]
			||a[3]==a[4]||a[3]==a[5]||a[4]==a[5]);

	for(int i=0;i<6;i++)
	{
		if(lottery[i]==a[0]||lottery[i]==a[1]||lottery[i]==a[2]||lottery[i]==a[3]||lottery[i]==a[4]||lottery[i]==a[5])
		{
			ans++;
		}
	}
	cout<<"�A�U�`���X���G"<<endl<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
	cout<<"�o�������X���G"<<endl<<lottery[0]<<" "<<lottery[1]<<" "<<lottery[2]<<" "<<lottery[3]<<" "<<lottery[4]<<" "<<lottery[5]<<endl;
	switch(ans)
	{
	case 1:
		cout<<"��o����!"<<endl;
		break;
	case 2:
		cout<<"��o����!"<<endl;
		break;
	case 3:
		cout<<"��o�|��!"<<endl;
		break;
	case 4:
		cout<<"��o�T��!"<<endl;
		break;
	case 5:
		cout<<"��o�G��!"<<endl;
		break;
	case 6:
		cout<<"��o�Y��!"<<endl;
		break;
	default:
		cout<<"���´f�U!"<<endl;
		break;
	}
	system("pause");
	return 0;
}