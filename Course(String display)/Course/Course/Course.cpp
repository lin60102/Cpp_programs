// Course.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	array<String^>^n=gcnew array <String^>(5);
	for(int i=0;i<n->Length;i++)
	{
		Console::Write("請輸入第{0}個字串",i);
		n[i]=Console::ReadLine();
	}
	Console::WriteLine("======以下使用for迴圈顯示陣列======");
	for(int i=0;i<n->Length;i++)
	{
		Console::WriteLine("陣列中索引值第{0}個的字串為{1}",i,n[i]);
	}
	Console::WriteLine("======以下使用for each迴圈顯示陣列======");
	int i=0;
	for each(String^ s in n)
	{
		Console::WriteLine("陣列中索引值第{0}個的字串為{1}",i,n[i]);
		i=i+1;
	}
	Console::WriteLine("======以上已結束，嘖嘖嘖嘖嘖！======");
	system("pause");
    return 0;
}
