#include <iostream>
#include <opencv2/opencv.hpp>       // this header conains all others (openCv)
#include <string>
#include <fstream>
#include <vector>

#define DBG
#include "../include/dbg.h"




int main()
{
    // make use of our generic print function (see more info inside /include/dbg.h)
    p(Color::Regular::Yellow, "This is a general test.");

    std::string path_to_pic = "Data/test.png";
    cv::Mat test_img = cv::imread(path_to_pic, cv::IMREAD_COLOR);
    cv::namedWindow("Test Window", 1);
    
    if (!test_img.empty())
    {
        cv::imshow("Test Window", test_img);
        log("Image source found.");
    }
    else
    {
        // make use of our Debug print function (see more info inside /include/dbg.h)
        log("Image source not found.");
        exit(-1);
    }


    p("Hit ", Color::Regular::Blue, "'q' ", Color::Color_Off, "to exit.");
    while (cv::waitKey(0) != 'q');


    return 0;
}