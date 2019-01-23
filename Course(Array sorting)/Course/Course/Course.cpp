// Course.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	array <int> ^MyArray = {2,3,1,5,4};
	Console::Write("陣列初值為 = ");
	for each(int item in MyArray)
		Console::Write("{0}  ",item);
	Console::WriteLine();
	Array::Sort(MyArray);
	Console::Write("陣列排序後 = ");
	for each(int item in MyArray)
		Console::Write("{0}  ",item);
	Console::WriteLine();
	system("pause");
    return 0;
}
