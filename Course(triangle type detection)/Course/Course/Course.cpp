// Course.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	Console::Write("�п�J��� a�G");
	int a = Convert::ToInt32(Console::ReadLine());
	Console::Write("�п�J��� b�G");
	int b = Convert::ToInt32(Console::ReadLine());
	Console::Write("�п�J��� c�G");
	int c = Convert::ToInt32(Console::ReadLine());
	if(a>0 && b>0 && c>0)
	{
	     if(a+b>c && b+c>a && c+a>b)
	       {
	          if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
				{
					Console::WriteLine("�����T����");
				}
			else if (a*a+b*b>c*c || b*b+c*c>a*a || c*c+a*a>b*b)
				{
					Console::WriteLine("�U���T����");
				}
			else
			    {
					Console::WriteLine("�w���T����");
			    }

		float s = (float)(a+b+c)/2;
		float area = sqrt(s*(s-a)*(s-b)*(s-c));
		Console::WriteLine(Convert::ToString(area));
		  }
	    else
		Console::WriteLine("��������ন���T����");
	}
	else
	Console::WriteLine("�S�������");
	system("pause");
    return 0;
}
