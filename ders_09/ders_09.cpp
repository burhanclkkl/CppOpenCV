/*
https://opencv.org/releases/ -- https://sourceforge.net/projects/opencvlibrary/files/3.4.16/opencv-3.4.16-vc14_vc15.exe/download
project -> properties -> C/C++ -> General -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> C/C++ -> All Options -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> Linker -> General -> Additional Library Directories -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
project -> properties -> Linker -> Input -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
*/

// Image Filter

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;

void Filter(string path_image)
{
	cv::Mat image = cv::imread(path_image);

	cv::Mat resize_image, bilater_image, gaussian_image, median_image;
	cv::resize(image, resize_image, cv::Size(image.cols * 0.20, image.rows * 0.20), 0, 0, CV_INTER_LINEAR);

	cv::bilateralFilter(resize_image, bilater_image, 15, 120, 60);
	cv::GaussianBlur(resize_image, gaussian_image, cv::Size(15, 15), 0);
	cv::medianBlur(resize_image, median_image, 15);

	cv::imshow("Pool Image", resize_image);
	cv::imshow("Bilateral Filter Pool Image", bilater_image);
	cv::imshow("Gaussian Filter Pool Image", gaussian_image);
	cv::imshow("Median Filter Pool Image", median_image);

	cv::waitKey(0);
	cv::destroyAllWindows();
}

int main()
{
	Filter("image.jpg");
}
