// 9858045CLR.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
    String ^str1,^str2;
	Console::Write("�п�J�r�� str1 = ");//�п�J�r�� str1 = chinese
	str1=Console::ReadLine();
	Console::Write("�п�J�r�� str2 = ");//�п�J�r�� str2 = english
	str2=Console::ReadLine();
	Console::WriteLine("�r��1���� = {0}",str1->Length);//�r��1���� = 7
	Console::WriteLine("�r��2���� = {0}",str2->Length);//�r��2���� = 7
	Console::WriteLine("str1,str2 �r��ۥ[���G : {0}",str1+str2);//str1,str2 �r��ۥ[���G : chineseenglish
	int n=str1->CompareTo(str2);
	Console::WriteLine("str1,str2 �r�������G : {0}",n);//str1,str2 �r�������G : -1
	system("pause");
    return 0;
}