// 9858045Win32.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string str1,str2;
	cout<<"�п�J�r�� str1 = ";//�п�J�r�� str1 = chinese
	cin>>str1;
	cout<<"�п�J�r�� str2 = ";//�п�J�r�� str2 = english
	cin>>str2;
	cout<<"str1���׬� = "<<str1.length()<<endl;//str1���׬� = 7
	cout<<"str2���׬� = "<<str2.length()<<endl;//str2���׬� = 7
	cout<<"str1,str2 �r��ۥ[���G�G"<<str1+str2<<endl;//str1,str2 �r��ۥ[���G�Gchineseenglish
	int n=str1.compare(str2);
	cout<<"str1,str2 �r�������G�G"<<n<<endl;//str1,str2 �r�������G�G-1
	system("pause");
	return 0;
}