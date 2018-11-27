#pragma once
#include"opencv2/opencv.hpp"
using namespace cv;
class Mats_num
{
private:
	int num;
	Mat *mats;
public:
	void setMats(Mat* m);
	void setNum(int n);
	Mat* getMats();
	int getNum();
	Mats_num(Mat* m,int n);
	Mats_num();
	virtual ~Mats_num();

};

