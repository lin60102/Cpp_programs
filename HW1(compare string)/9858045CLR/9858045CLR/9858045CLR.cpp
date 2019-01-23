// 9858045CLR.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
    String ^str1,^str2;
	Console::Write("請輸入字串 str1 = ");//請輸入字串 str1 = chinese
	str1=Console::ReadLine();
	Console::Write("請輸入字串 str2 = ");//請輸入字串 str2 = english
	str2=Console::ReadLine();
	Console::WriteLine("字串1長度 = {0}",str1->Length);//字串1長度 = 7
	Console::WriteLine("字串2長度 = {0}",str2->Length);//字串2長度 = 7
	Console::WriteLine("str1,str2 字串相加結果 : {0}",str1+str2);//str1,str2 字串相加結果 : chineseenglish
	int n=str1->CompareTo(str2);
	Console::WriteLine("str1,str2 字串比較結果 : {0}",n);//str1,str2 字串比較結果 : -1
	system("pause");
    return 0;
}