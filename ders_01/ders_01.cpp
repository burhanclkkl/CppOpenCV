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
using namespace cv;

void GorselOkuGoster(string dosyaYolu)
{
	Mat resim;
	resim = imread(dosyaYolu);
	if (resim.data)
	{
		imshow("Linebacker Image 1", resim);
		namedWindow("Pencere 2");
		namedWindow("Pencere 3");
		waitKey();
		destroyAllWindows();
	}
	else
	{
		cout << "Resim Okunamadi Hatali Yol!" << endl;
	}
}

int main()
{
	cout << "Merhaba Ders_01" << endl;
	GorselOkuGoster("Overshown_Demarvion_011.jpg");
	return 0;
}