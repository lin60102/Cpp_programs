// Course.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	array <int> ^MyArray = {2,3,1,5,4};
	Console::Write("�}�C��Ȭ� = ");
	for each(int item in MyArray)
		Console::Write("{0}  ",item);
	Console::WriteLine();
	Array::Sort(MyArray);
	Console::Write("�}�C�Ƨǫ� = ");
	for each(int item in MyArray)
		Console::Write("{0}  ",item);
	Console::WriteLine();
	system("pause");
    return 0;
}
