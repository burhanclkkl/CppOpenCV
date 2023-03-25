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

void BasitResimOlustur(int genislik , int yukseklik, int blue, int red, int green)
{
	cv::Mat resim(yukseklik, genislik, CV_8UC3); // CV_8UC3 blue, green, red
	resim = cv::Scalar(blue, green, red);
	cout << "Blue: " << blue << " Green: " << green << " Red:" << red << endl;
	cv::imshow("Green: Renk Palet Penceresi", resim);
	cv::waitKey();
}

int main()
{
	BasitResimOlustur(640, 480, 0, 0, 255);
}