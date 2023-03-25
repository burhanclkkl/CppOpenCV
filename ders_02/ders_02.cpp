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

void VideoOkuGoster(string dosyaYolu)
{
	VideoCapture video;
	video.open(dosyaYolu);

	if (video.isOpened())
	{
		cout << "Video Acildi!" << endl;
		Mat anlik_resim;
		int fps = 60;
		int tus = 0;

		while (video.read(anlik_resim))
		{
			imshow("Video Penceresi 1", anlik_resim);
			tus = waitKey(fps);

			if (tus == 27)
			{
				cout << "Video'dan Cikildi! " << fps << endl;
				break;
			}

			else if (tus == 43)
			{
				fps++;
				cout << "Video FPS Artirildi! " << fps << endl;
			}

			else if (tus == 45)
			{
				fps--;
				cout << "Video FPS Azaltildi! " << fps << endl;
			}
		}
		destroyAllWindows();
	}
	else
	{
		cout << "Video Acilamadi! Dosya Yolu:" << dosyaYolu << endl;
	}
	waitKey();
	return;
}
int main()
{
	VideoOkuGoster("video.mp4");
}