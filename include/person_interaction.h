#pragma once
#include "tools.h"
struct coord {
    double x = 0.0;
    double y = 0.0;
};

coord coordBeginIncision;
coord coordEndIncision;

void start_operation (const std::string& command, bool& scalpelUse) {

    if (!scalpelUse && command == "scalpel") {
        scalpelUse = true;
    } else if (!scalpelUse) {
        std::cout << "The first command should be \"scalpel\"" << std::endl;
    }
}

void using_scalpel (double& xBegin, double& xEnd,double& yBegin, double& yEnd) {
    std::cout << "Enter the coordinates of the beginning of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> xBegin;
    std::cout << "y = ";
    std::cin >> yBegin;
    std::cout << "Enter the coordinates of the end of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> xEnd;
    std::cout << "y = ";
    std::cin >> yEnd;
    std::cout << scalpel () << std::endl;
}

void using_hemostat (double& x, double& y) {
    std::cout << "Enter the coordinates of the hemostat position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> x;
    std::cout <<  "y = ";
    std::cin >> y;
    std::cout << hemostat (x, y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
}

void using_tweezers (double& x, double& y) {
    std::cout << "Enter the coordinates of the tweezer position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> x;
    std::cout <<  "y = ";
    std::cin >> y;
    std::cout << tweezers (x, y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
}

bool make_suture (double& xBegin, double& xEnd, double& yBegin, double& yEnd, bool& finish) {
    std::cout << "Enter the coordinates of the beginning of the suture" << std::endl;
    std::cout << "x = ";
    std::cin >> xBegin;
    std::cout << "y = ";
    std::cin >> yBegin;
    std::cout << "Enter the coordinates of the end of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> xEnd;
    std::cout << "y = ";
    std::cin >> yEnd;
    if (suture (coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y, xBegin, xEnd, yBegin, yEnd)) {
        std::cout << "The suture was made" << std::endl << "The operation is over" << std::endl;
        return finish = true;
    } else {
        std::cout << "Wrong coordinates. The suture wasn't made. Try again" << std::endl;
        return finish;
    }
}

