// test.cpp: �D�n�M���ɡC

#include "stdafx.h"
#include "iostream"

using namespace System;
using namespace System::Collections; 

int main(array<System::String ^> ^args)
{
	ArrayList ^a = gcnew ArrayList();
	int num,ans;
	do
	{
		Console::Write("�п�J�@�ӼƦr�G");
		try
		{
			num = Convert::ToInt16(Console::ReadLine());
			if(num>99||num<2)
			{
				throw gcnew ArgumentOutOfRangeException();
			}
			else
			{
				for(int i=1;i<num+1;i++)
				{
					ans=num%i;
					if(ans==0)
					{
						a->Add(i);
					}
				}
				Console::Write("�]�Ʀ��G ");
				for each(Object^ item in a)
					Console::Write("{0} ",item);
				Console::WriteLine();
				if(a->Count==2)
				{
					Console::WriteLine("�A��J���Ʀr {0} �����",num);
				}
				else
				{
					Console::WriteLine("�A��J���Ʀr {0} ���D���",num);
				}
			}
		}
		catch(ArgumentOutOfRangeException ^error)
		{
			Console::WriteLine("��J���Ʀr�����b2~99�����I���~�T�����G"+error->Message);
		}
		catch(Exception ^error)
		{
			Console::WriteLine("���~�T�����G"+error->Message);
		}
	}while(num>99||num<2);
	system("pause");
    return 0;
}