/*
https://opencv.org/releases/ -- https://sourceforge.net/projects/opencvlibrary/files/3.4.16/opencv-3.4.16-vc14_vc15.exe/download
project -> properties -> C/C++ -> General -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> C/C++ -> All Options -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> Linker -> General -> Additional Library Directories -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
project -> properties -> Linker -> Input -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
*/

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;

void MatrisOrnegi(string dosyaYolu)
{
	cv::Mat resim = cv::imread(dosyaYolu);
	cv::imshow("Resim", resim);
	cv::waitKey();
	for (int x = 0; x < resim.cols; x++)
	{
		for (int y = 0; y < resim.rows; y++)
		{
			cout << resim.at <cv::Vec3b> (cv::Point(x, y)) << endl;
		}
	}

	return;
}
int main()
{
	MatrisOrnegi("DeMarvionOvershown_ql2zW.jpg");
}