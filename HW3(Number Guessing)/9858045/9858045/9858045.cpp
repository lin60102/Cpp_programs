// 9858045.cpp : 定義主控台應用程式的進入點。
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
		cout<<"請輸入6碼下注："<<endl;
		for(int i=0;i<6;i++)
		{
			cin>>a[i];
			while(a[i]<=0||a[i]>42)
			{
				cout<<"超過範圍，範圍是0-42，請重新下注！"<<endl;
				cin>>a[i];
			}
		}
		if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[0]==a[4]||a[0]==a[5]
			||a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[1]==a[5]
			||a[2]==a[3]||a[2]==a[4]||a[2]==a[5]
			||a[3]==a[4]||a[3]==a[5]||a[4]==a[5])
			{
				cout<<"有重複號碼，請重新下注！"<<endl;
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
	cout<<"你下注號碼為："<<endl<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
	cout<<"得獎的號碼為："<<endl<<lottery[0]<<" "<<lottery[1]<<" "<<lottery[2]<<" "<<lottery[3]<<" "<<lottery[4]<<" "<<lottery[5]<<endl;
	switch(ans)
	{
	case 1:
		cout<<"獲得六獎!"<<endl;
		break;
	case 2:
		cout<<"獲得五獎!"<<endl;
		break;
	case 3:
		cout<<"獲得四獎!"<<endl;
		break;
	case 4:
		cout<<"獲得三獎!"<<endl;
		break;
	case 5:
		cout<<"獲得二獎!"<<endl;
		break;
	case 6:
		cout<<"獲得頭獎!"<<endl;
		break;
	default:
		cout<<"銘謝惠顧!"<<endl;
		break;
	}
	system("pause");
	return 0;
}