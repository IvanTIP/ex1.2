#include <iostream>
#include "../include/tools.h"
#include "../include/person_interaction.h"

struct coord {
    double x = 0.0;
    double y = 0.0;
};
int main() {
    bool scalpelUse = false;
    coord coordBeginIncision;
    coord coordEndIncision;
    while (true) {
        std::string command;
        std::cout << "Command: ";
        std::cin >> command;
        start_operation (command, scalpelUse);
        if (command == "scalpel") {
            using_scalpel (coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y);
            std::cout << scalpel() << std::endl;
        } else if (scalpelUse && command == "hemostat") {
            coord hemostatPoint;
            using_hemostat (hemostatPoint.x, hemostatPoint.y);
            std::cout << hemostat (hemostatPoint.x, hemostatPoint.y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
        } else if (scalpelUse && command == "tweezers") {
            coord tweezerPoint;
            using_tweezers (tweezerPoint.x, tweezerPoint.y);
            std::cout << tweezers (tweezerPoint.x, tweezerPoint.y, coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y) << std::endl;
        } else if (scalpelUse && command == "suture") {
            coord coordBeginSuture;
            coord coordEndSuture;
            make_suture (coordBeginSuture.x, coordEndSuture.x, coordBeginSuture.y, coordEndSuture.y);
            if (suture (coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y, coordBeginSuture.x, coordEndSuture.x, coordBeginSuture.y, coordEndSuture.y)) {
                std::cout << "The suture was made" << std::endl;
                break;
            } else {
                std::cout << "Wrong coordinates. The suture wasn't made. Try again" << std::endl;
            }
        }
    }

    return 0;
}
