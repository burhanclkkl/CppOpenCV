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
#include<httprequestid.h>

using namespace std;

void WebcamOkuGoster(int ch)
{
	cv::VideoCapture video;
	if (video.open(ch))
	{
		cout << "Kamera Acildi!" << endl;
		cv::Mat anlik_goruntu;

		while (video.grab())
		{
			video.retrieve(anlik_goruntu);
			cv::imshow("Webcam", anlik_goruntu);
			cv::waitKey(60);
		}
	}
	else
	{
		cout << "Channel: " << ch << "Kamerasi Acilamadi!" << endl;
	}
	return;
}
int main()
{
	WebcamOkuGoster(0); // 0 or 1 :Webcam
}