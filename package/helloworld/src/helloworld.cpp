#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main(int argv,char** argc)
{
	VideoCapture videocapture(0);
	cout<<"VideoCapture"<<endl;
	//videocapture.set(CV_CAP_PROP_FOURCC,CV_FOURCC('M', 'J', 'P', 'G'));
	if(!videocapture.isOpened()){
		cout<<"camera opened failed! please check for camera was selected!"<<endl;
		return -1;	
	}
	Mat dst;
	cout<<"read stream"<<endl;
	videocapture >> dst;
	cout<<"save picture"<<endl;
	imwrite("/tmp/opencvtest.jpg",dst);
	cout<<"end"<<endl;
	return 0;
}
