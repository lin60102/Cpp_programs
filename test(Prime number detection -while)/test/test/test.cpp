// test.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace System::Collections; 

int main(array<System::String ^> ^args)
{
	ArrayList ^a = gcnew ArrayList();
	int num,ans,i=1;
	do
	{
		Console::Write("請輸入一個數字：");
		try
		{
			num = Convert::ToInt16(Console::ReadLine());
			if(num>99||num<2)
			{
				throw gcnew ArgumentOutOfRangeException();
			}
			else
			{
				while(i<num+1)
				{
					ans=num%i;
					i++;
					if(ans==0)
					{
						a->Add(i-1);
					}
				}
				Console::Write("因數有： ");
				for each(Object^ item in a)
					Console::Write("{0} ",item);
				Console::WriteLine();
				if(a->Count==2)
				{
					Console::WriteLine("你輸入的數字 {0} 為質數",num);
				}
				else
				{
					Console::WriteLine("你輸入的數字 {0} 為非質數",num);
				}
			}
		}
		catch(ArgumentOutOfRangeException ^error)
		{
			Console::WriteLine("輸入之數字必須在2~99之間！錯誤訊息為："+error->Message);
		}
		catch(Exception ^error)
		{
			Console::WriteLine("錯誤訊息為："+error->Message);
		}
	}while(num>99||num<2);
	system("pause");
    return 0;
}