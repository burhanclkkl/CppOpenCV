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
int nokta_1_x, nokta_1_y, nokta_2_x, nokta_2_y, blue, red, green, thickness_;

cv::Mat ResimdeCizgiCiz(string dosyaYolu)
{
	cv::Mat asil_resim = cv::imread(dosyaYolu);
	cv::Mat cizili_resim;
	asil_resim.copyTo(cizili_resim); // asil_resim kopylandi ve cizili resim asil_resim kopyalanmis verisini icerir

	if (asil_resim.data)
	{
		cout << "Image Bulundu!" << endl;
	}
	else
	{
		cout << "Image Bulunamadi ! Dosya Yolu:" << dosyaYolu << endl;
	}
	// image max x = cols - image max y = rows
	cv::line(cizili_resim,cv::Point(nokta_1_x, nokta_1_y), cv::Point(nokta_2_x, nokta_2_y), cv::Scalar(blue, red, green), thickness_);
	return cizili_resim;
}
int main() 
{
	cout << "Nokta X: " << endl; cin >> nokta_1_x;
	cout << "Nokta Y: " << endl; cin >> nokta_1_y;
	cout << "Nokta X: " << endl; cin >> nokta_2_x;
	cout << "Nokta Y: " << endl; cin >> nokta_2_y;
	cout << "Color Blue: " << endl; cin >> blue;
	cout << "Color Green: " << endl; cin >> green;
	cout << "Color Red: " << endl; cin >> red;

	cout << "Thickness: " << endl; cin >> thickness_;
	cv::imshow("Image", ResimdeCizgiCiz("DeMarvionOvershown_ql2zW.jpg"));
	cv::waitKey();
	cv::destroyAllWindows();
}