#pragma once
#include"opencv2/opencv.hpp"
#include"Mats_num.h"
using namespace cv;
Mats_num getBlockSplit(Mat m, Vec<double, 5> v, int q);