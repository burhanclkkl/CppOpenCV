/*
https://opencv.org/releases/ -- https://sourceforge.net/projects/opencvlibrary/files/3.4.16/opencv-3.4.16-vc14_vc15.exe/download
project -> properties -> C/C++ -> General -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> C/C++ -> All Options -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> Linker -> General -> Additional Library Directories -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
project -> properties -> Linker -> Input -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;

		x

y		.(x,y)

*/

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;

cv:: Mat ResimKirpma(string dosyaYolu, int genislik, int yukseklik, int x, int y)
{
	cv::Mat resim = cv::imread(dosyaYolu);
	cv::Mat kirpilmis_resim;
	resim.copyTo(kirpilmis_resim);
	kirpilmis_resim = cv::Mat(kirpilmis_resim, cv::Rect(x, y, genislik, yukseklik));
	return kirpilmis_resim;
}
int main()
{
	cv::Mat orijinalresim = cv::imread("Overshown_Demarvion_008.jpg");
	cv::imshow("Orijinal Resim", orijinalresim);
	cv::imshow("Kirpilmis Resim", ResimKirpma("Overshown_Demarvion_008.jpg", 800, 800, 500, 25));
	cv::waitKey();
}