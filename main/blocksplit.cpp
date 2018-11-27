#include"blocksplit.h"
#include"gausfitting.h"
#include"Mats_num.h"
#include"getGaus.h"
#include"iostream"
using namespace std;
Mats_num getBlockSplit(Mat m, Vec<double, 5> v, int q)
{
	Mat m1 = m.clone();
	Mat *m2 = new Mat[v[4]];
	double *fit;
	for(int i=0;i<v[4];i++)
	{
		fit = gausFitting(m1, q);
		m2[i].create(m1.rows, m1.cols, CV_64FC1);
		getGaus2(m2[i], fit[5], m1.rows, m1.cols, fit[3], fit[4], fit[2], fit[0], fit[1]);
		m1 -= m2[i];
		cout << "***************" << endl;
		delete[]fit; 
	}
	Mats_num mn(m2, v[4]);
	cout << mn.getNum() << endl;
	//cout << mn.getMats()[0] << endl;
	return mn;
}

