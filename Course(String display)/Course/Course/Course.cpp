// Course.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	array<String^>^n=gcnew array <String^>(5);
	for(int i=0;i<n->Length;i++)
	{
		Console::Write("�п�J��{0}�Ӧr��",i);
		n[i]=Console::ReadLine();
	}
	Console::WriteLine("======�H�U�ϥ�for�j����ܰ}�C======");
	for(int i=0;i<n->Length;i++)
	{
		Console::WriteLine("�}�C�����ޭȲ�{0}�Ӫ��r�ꬰ{1}",i,n[i]);
	}
	Console::WriteLine("======�H�U�ϥ�for each�j����ܰ}�C======");
	int i=0;
	for each(String^ s in n)
	{
		Console::WriteLine("�}�C�����ޭȲ�{0}�Ӫ��r�ꬰ{1}",i,n[i]);
		i=i+1;
	}
	Console::WriteLine("======�H�W�w�����A�ɹɹɹɹɡI======");
	system("pause");
    return 0;
}
