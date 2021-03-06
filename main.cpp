#include "head.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace cv;

int main(int argc, char *argv[])
{
    std::string imgPath = "data/img/0/0.jpg";
    std::string roiFilePath  =  "data/tmp1.txt";
    std::ifstream fin(roiFilePath.c_str());
    std::vector<std::pair<cv::Point, cv::Point> >  rois;

    cv::Mat im = imread(imgPath.c_str(), CV_LOAD_IMAGE_COLOR);

    cv::Point Pul, Pdr;
    int rdx, rdy, w, h;
    char c;
    int flag = 0;
    while(fin>>rdx) {
        fin.get(c);
        std::cout<<" "<<c;
        /*
        if (c == '\n' ) {
            flag++;
            if (flag == 1)
                continue;
            std::cout<<"break"<<std::endl;
            break;
            }
            */
    }
/*
    while(fin >> rdx >> rdy >> w >> h) {
            Pul = cv::Point(rdx - w, rdy - h);
            Pdr = cv::Point(rdx, rdy);
            rois.push_back(std::make_pair(Pul , Pdr) );
            char c;
            fin.get( c);
            std::cout<<c<<" ";
            if (c == '\n')
                break;
    }
    for (int i = 0; i < rois.size(); i++) {
        Pul = rois[i].first;
        Pdr = rois[i].second;
        cv::rectangle(im, Pul, Pdr, cv::Scalar(0, 255, 0), CV_FILLED);
    }
    cv::imshow("1", im);
	waitKey(0);
*/
    Mat img = imread("lena.jpg", CV_LOAD_IMAGE_COLOR);
    if(img.empty())
       return -1;
    namedWindow( "lena", CV_WINDOW_AUTOSIZE );
    imshow("lena", img);
    waitKey(0);
    return -1;
}



