#pragma once
#include "tools.h"
struct coord {
    double x = 0.0;
    double y = 0.0;
};

coord coordBeginIncision;
coord coordEndIncision;
coord hemostatPoint;
coord tweezerPoint;
coord coordBeginSuture;
coord coordEndSuture;

void start_operation (const std::string& command, bool& scalpelUse) {

    if (!scalpelUse && command == "scalpel") {
        scalpelUse = true;
    } else if (!scalpelUse) {
        std::cout << "The first command should be \"scalpel\"" << std::endl;
    }
}

void using_scalpel () {
    std::cout << "Enter the coordinates of the beginning of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> coordBeginIncision.x;
    std::cout << "y = ";
    std::cin >> coordBeginIncision.y;
    std::cout << "Enter the coordinates of the end of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> coordEndIncision.x;
    std::cout << "y = ";
    std::cin >> coordEndIncision.y;
    std::cout << scalpel () << std::endl;
}

void using_hemostat () {
    std::cout << "Enter the coordinates of the hemostat position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> hemostatPoint.x;
    std::cout <<  "y = ";
    std::cin >> hemostatPoint.y;
    std::cout << hemostat (hemostatPoint.x, hemostatPoint.y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
}

void using_tweezers () {
    std::cout << "Enter the coordinates of the tweezer position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> tweezerPoint.x;
    std::cout <<  "y = ";
    std::cin >> tweezerPoint.y;
    std::cout << tweezers (tweezerPoint.x, tweezerPoint.y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
}

bool make_suture (bool &finish) {
    std::cout << "Enter the coordinates of the beginning of the suture" << std::endl;
    std::cout << "x = ";
    std::cin >> coordBeginSuture.x;
    std::cout << "y = ";
    std::cin >> coordBeginSuture.y;
    std::cout << "Enter the coordinates of the end of the cut" << std::endl;
    std::cout << "x = ";
    std::cin >> coordEndSuture.x;
    std::cout << "y = ";
    std::cin >> coordEndSuture.y;
    if (suture (coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y, coordBeginSuture.x, coordEndSuture.x, coordBeginSuture.y, coordEndSuture.y)) {
        std::cout << "The suture was made" << std::endl << "The operation is over" << std::endl;
        return finish = true;
    } else {
        std::cout << "Wrong coordinates. The suture wasn't made. Try again" << std::endl;
        return finish;
    }
}