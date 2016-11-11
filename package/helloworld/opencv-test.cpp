#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main(int argv,char** argc)
{
	VideoCapture videocapture(0);
	if(!videocapture.isOpened()){
		cout<<"camera opened failed! please check for camera was selected!"<<endl;
		return -1;	
	}
	Mat dst;
	videocapture>>dst;
	imwrite("/tmp/opencvtest.jpg",dst);
	return 0;
}
