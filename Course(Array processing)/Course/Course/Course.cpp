// Course.cpp: 主要專案檔。

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
	Console::WriteLine("========== 1. 以for each顯示陣列 =====================");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 2. 以陣列指標顯示陣列值 ===================");
	for(int i=0;i<a1->Count;i++)
		Console::Write("{0}  ",a1[i]);
	Console::WriteLine("\n");
	Console::WriteLine("========== 3. 尋找陣列元素 l 在陣列中的位置 ==========");
	int x = a1->IndexOf("l");
	Console::Write("陣列元素第{0}個的值 = {1}",x+1,a1[x]);
	Console::WriteLine("\n");
	Console::WriteLine("========== 4. 移除陣列第n個元素後 ====================");
	a1->RemoveAt(x);
	Console::Write("移除陣列第{0}個元素後 = ",x+1);
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 5. 在第2個元素位置插入QQ字串後 ============");
	a1->Insert(1,"QQ");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	Console::WriteLine("========== 6. 移除指定的陣列元素 e 後 ================");
	a1->Remove("e");
	for each(Object ^show1 in a1)
		Console::Write("{0}  ",show1);
	Console::WriteLine("\n");
	system("pause");
    return 0;
}