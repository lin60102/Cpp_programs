// Course.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
Here:
	string a[]={"123","456","789","abc","357"};
	string s;
	int i;
	bool isfound=false;
	cout<<"請輸入搜尋的字串"<<endl;
	cin>>s;
	for(i=0;i<6;i++)
	{
		if(a[i].compare(s)==0)
		{
			isfound=true;
			break;
		}
	}
	if(isfound==true)
		cout<<s<<"在陣列的索引值="<<i<<endl;
	else
		cout<<s<<"不在陣列中"<<endl;
	goto Here;
	return 0;
}