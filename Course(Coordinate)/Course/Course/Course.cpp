// Course.cpp: 主要專案檔。

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	array <float,2> ^coordinate = gcnew array <float,2>(5,2){{0,1},{0,2},{1,1},{2,2},{4,4}};
	float x,y;
	Console::Write("請輸入一個x座標=");
	x=Convert::ToSingle(Console::ReadLine());
	Console::Write("請輸入一個y座標=");
	y=Convert::ToSingle(Console::ReadLine());
	int tag=0;
	float min=100000;
	for(int i=0;i<coordinate->GetLength(0);i++)
	{
		float distance=0;
		distance = sqrt((x-coordinate[i,0])*(x-coordinate[i,0])+(y-coordinate[i,1])*(y-coordinate[i,1]));
		if(distance<min)
		{
			min=distance;
			tag=i;
		}
	}
	Console::WriteLine("距離最近的點為第{0}個點，座標({1},{2})，距離為{3}",tag+1,coordinate[tag,0],coordinate[tag,1],min);
	system("pause");
    return 0;
}