// test.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"

using namespace System;

int main(array<System::String ^> ^args)
{
	String ^ans = "1234";
	String ^num;
	int a,b,input;
	do
	{
Start:
		a=0,b=0;
		Console::WriteLine("請輸入4個號碼：");
		num = Console::ReadLine();
		try
		{
			input = Convert::ToInt32(num);
		}
		catch(Exception ^error)
		{
			Console::WriteLine("請勿輸入非數字！");
			goto Start;
		}
		if(num->Length==4)
		{
			if(num[0]==num[1]||num[0]==num[2]||num[0]==num[3]||num[1]==num[2]||num[1]==num[3]||num[2]==num[3])
			{
				Console::WriteLine("數字不可重複！");
			}
			else
			{
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						if(num[i]==ans[j] && i==j)
							a++;
						else if (num[i]==ans[j])
							b++;
					}
				}
				Console::WriteLine("{0}A{1}B",a,b);
			}
		}
		else
		{
			Console::WriteLine("數字格式不符合！");
		}
	}while(a<4 || b>0);
	Console::WriteLine("恭喜猜對！");
	system("pause");
	return 0;
}