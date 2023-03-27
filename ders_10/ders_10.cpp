/*
https://opencv.org/releases/ -- https://sourceforge.net/projects/opencvlibrary/files/3.4.16/opencv-3.4.16-vc14_vc15.exe/download
project -> properties -> C/C++ -> General -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> C/C++ -> All Options -> Additional Include Directories -> C:\opencv\build\include;
project -> properties -> Linker -> General -> Additional Library Directories -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
project -> properties -> Linker -> Input -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib\opencv_world3416d.lib;
*/

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

//Erosion And Dilation
int main()
{
	cv::Mat image = cv::imread("ErosionAndDilationInputImage.png");

	cv::Mat image_erode_mat, image_dilate_mat;
	//cv::Mat element_kernel = cv::getStructuringElement(cv::MORPH_CROSS, cv::Size(15, 15), cv::Point(1, 1));
	cv::Mat element_kernel;
	cv::erode(image, image_erode_mat, element_kernel, cv::Point(-1, 2), 2);
	cv::dilate(image, image_dilate_mat, element_kernel, cv::Point(-1, -1), 1);

	cv::imshow("Input Image", image);
	cv::imshow("Eroded Image", image_erode_mat);
	cv::imshow("Dilate Image", image_dilate_mat);

	cv::waitKey();
	cv::destroyAllWindows();
}