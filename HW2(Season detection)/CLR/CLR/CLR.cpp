// CLR.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	int month;
	Console::Write("Please enter the month：");//Please enter the month：
	month=Convert::ToInt16(Console::ReadLine());
	if(month==6||month==7||month==8)
	Console::WriteLine("The month is Summer.");//The month is Summer.
	else if(month==9||month==10||month==11)
	Console::WriteLine("The month is Fall.");//The month is Fall.
	else if(month==12||month==1||month==2)
	Console::WriteLine("The month is Winter.");//The month is Winter.
	else if(month==3||month==4||month==5)
	Console::WriteLine("The month is Spring.");//The month is Spring.
	else 
	Console::WriteLine("The month is wrong.");//The month is wrong.
	system("pause");
    return 0;
}
