#include "Mats_num.h"



Mats_num::Mats_num(Mat* m,int n)
{
	//mats = new Mat[4];
	mats = m;
	num = n;
}

Mats_num::Mats_num()
{
	//mats = new Mat[4];
}

void Mats_num::setNum(int n)
{
	num = n;
}

void Mats_num::setMats(Mat* m)
{
	mats = m;
}

Mat* Mats_num::getMats()
{
	return mats;
}

int Mats_num::getNum()
{
	return num;
}

Mats_num::~Mats_num()
{
	//delete[]mats;
}
