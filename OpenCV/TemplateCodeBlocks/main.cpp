#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/highgui.h>

using namespace std;
using namespace cv;


int main(int argc, char **argv)
{
        Mat im = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
        namedWindow("Hello");
        imshow("HelloImage", im);

        cout << "Press 'q' to quit..." << endl;

        while(char(waitKey(1)) != 'q') {}
}
