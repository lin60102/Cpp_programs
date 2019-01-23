// Course.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Console::Write("請輸入邊長 a：");
	int a = Convert::ToInt32(Console::ReadLine());
	Console::Write("請輸入邊長 b：");
	int b = Convert::ToInt32(Console::ReadLine());
	Console::Write("請輸入邊長 c：");
	int c = Convert::ToInt32(Console::ReadLine());
	if(a>0 && b>0 && c>0)
	{
	     if(a+b>c && b+c>a && c+a>b)
	       {
	          if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
				{
					Console::WriteLine("直角三角形");
				}
			else if (a*a+b*b>c*c || b*b+c*c>a*a || c*c+a*a>b*b)
				{
					Console::WriteLine("銳角三角形");
				}
			else
			    {
					Console::WriteLine("鈍角三角形");
			    }

		float s = (float)(a+b+c)/2;
		float area = sqrt(s*(s-a)*(s-b)*(s-c));
		Console::WriteLine(Convert::ToString(area));
		  }
	    else
		Console::WriteLine("此邊長不能成為三角形");
	}
	else
	Console::WriteLine("沒有此邊長");
	system("pause");
    return 0;
}
