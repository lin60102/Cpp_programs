// Course.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace System::Collections;

int main(array<System::String ^> ^args)
{
	ArrayList ^a1 = gcnew ArrayList();
	a1->Add("a");
	a1->Add("p");
	a1->Add("p");
	a1->Add("l");
	a1->Add("e");
	Console::WriteLine("========== 1. �Hfor each��ܰ}�C =====================");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 2. �H�}�C������ܰ}�C�� ===================");
	for(int i=0;i<a1->Count;i++)
		Console::Write("{0}  ",a1[i]);
	Console::WriteLine("\n");
	Console::WriteLine("========== 3. �M��}�C���� l �b�}�C������m ==========");
	int x = a1->IndexOf("l");
	Console::Write("�}�C������{0}�Ӫ��� = {1}",x+1,a1[x]);
	Console::WriteLine("\n");
	Console::WriteLine("========== 4. �����}�C��n�Ӥ����� ====================");
	a1->RemoveAt(x);
	Console::Write("�����}�C��{0}�Ӥ����� = ",x+1);
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 5. �b��2�Ӥ�����m���JQQ�r��� ============");
	a1->Insert(1,"QQ");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 6. �������w���}�C���� e �� ================");
	a1->Remove("e");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	system("pause");
    return 0;
}