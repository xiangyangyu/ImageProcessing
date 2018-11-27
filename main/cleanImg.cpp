#include"blocksplit.h"
#include"conv.h"
#include"cleanImg.h"
#include"iostream"
using namespace std;

void cleanImg(Mat dirty, Mat psf, Mats_num mn)
{
	Mat m1 = dirty.clone();
	Mat psf1 = psf.clone();
	Mat afterImg;
	//Mat m2(m1.rows + psf1.rows - 1, m1.cols + psf1.cols - 1, CV_64FC1);
	Mat m2(m1.rows, m1.cols, CV_64FC1);
	for (int i = 0; i < mn.getNum(); i++)
	{
		filter2D(mn.getMats()[i], m2, -1, psf1);
		//convGet(psf1, mn.getMats()[i], m2);
		afterImg = m1 - m2;
	}
	namedWindow("cleanImg", WINDOW_NORMAL);
	imshow("cleanImg", afterImg);
	waitKey();
}