// Course.cpp : �w�q�D���x���ε{�����i�J�I�C
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
	cout<<"�п�J�j�M���r��"<<endl;
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
		cout<<s<<"�b�}�C�����ޭ�="<<i<<endl;
	else
		cout<<s<<"���b�}�C��"<<endl;
	goto Here;
	return 0;
}