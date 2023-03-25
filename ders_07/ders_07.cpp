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

/*
// Dörtgen Çizimi
cv::Mat ResimdeDortgenCiz(string dosyaYolu)
{
	cv::Mat resim = cv::imread(dosyaYolu);
	cv::rectangle(resim, cv::Point(10, 20), cv::Point(600, 800), cv::Scalar(255, 255, 255), 5);
	return resim;
}
int main()
{
	cv::imshow("Rectangle Penceresi", ResimdeDortgenCiz("DeMarvionOvershown_ql2zW.jpg"));
	cv::waitKey();
	cv::destroyAllWindows();
}
*/

//----------------

/*
// Yazi Yazimi
cv::Mat ResimdeYaziYaz(string dosyaYolu, string yazi)
{
	cv::Mat resim = cv::imread(dosyaYolu);
	cv::Mat yazili_resim;
	resim.copyTo(yazili_resim);
	cv::putText(yazili_resim, yazi, cv::Point(25, 30), CV_FONT_HERSHEY_COMPLEX_SMALL, 2, cv::Scalar(255, 255, 255), 3);
	return yazili_resim;
}
int main()
{
	cv::imshow("Yazi Penceresi", ResimdeYaziYaz("DeMarvionOvershown_ql2zW.jpg", "Yaziya Eklenen Metin"));
	cv::waitKey();
	cv::destroyAllWindows();
}
*/

//----------------

/*
// Daire Çizimi
cv::Mat ResimdeDaireCiz(string dosyaYolu, int x, int y, int yaricap = 100, int kalinlik = 3)
{
	cv::Mat resim = cv::imread(dosyaYolu);
	cv::Point merkez(x, y);
	cv::Scalar renk(255, 0, 0);
	cv::circle(resim, merkez, yaricap, renk, kalinlik);
	return resim;
}
int main()
{
	cv::imshow("Circle Penceresi", ResimdeDaireCiz("DeMarvionOvershown_ql2zW.jpg", 500,500,500));
	cv::waitKey();
	cv::destroyAllWindows();
}
*/