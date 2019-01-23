// 9858045Win32.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str1,str2;
	cout<<"請輸入字串 str1 = ";//請輸入字串 str1 = chinese
	cin>>str1;
	cout<<"請輸入字串 str2 = ";//請輸入字串 str2 = english
	cin>>str2;
	cout<<"str1長度為 = "<<str1.length()<<endl;//str1長度為 = 7
	cout<<"str2長度為 = "<<str2.length()<<endl;//str2長度為 = 7
	cout<<"str1,str2 字串相加結果："<<str1+str2<<endl;//str1,str2 字串相加結果：chineseenglish
	int n=str1.compare(str2);
	cout<<"str1,str2 字串比較結果："<<n<<endl;//str1,str2 字串比較結果：-1
	system("pause");
	return 0;
}