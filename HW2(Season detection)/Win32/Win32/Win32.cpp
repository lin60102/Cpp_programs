// Win32.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int month;
	cout<<"Please enter the month：";//Please enter the month：
	cin>>month;
	if(month==6||month==7||month==8)
	cout<<"The month is Summer."<<endl;//The month is Summer.
	else if(month==9||month==10||month==11)
	cout<<"The month is Fall."<<endl;//The month is Fall.
	else if(month==12||month==1||month==2)
	cout<<"The month is Winter."<<endl;//The month is Winter.
	else if(month==3||month==4||month==5)
	cout<<"The month is Spring."<<endl;//The month is Spring.
	else 
	cout<<"The month is wrong."<<endl;//The month is wrong.
	system("pause");
	return 0;
}