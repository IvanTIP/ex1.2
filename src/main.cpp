#include <iostream>
#include "person_interaction.h"

int main() {
    bool scalpelUse = false;
    bool finish = false;
    while (!finish) {
        std::string command;
        std::cout << "Command: ";
        std::cin >> command;
        start_operation (command, scalpelUse);
        if (command == "scalpel") {
            using_scalpel (coordBeginIncision.x, coordEndIncision.x, coordBeginIncision.y, coordEndIncision.y);
        } else if (scalpelUse && command == "hemostat") {
            coord hemostatPoint;
            using_hemostat (hemostatPoint.x, hemostatPoint.y);
        } else if (scalpelUse && command == "tweezers") {
            coord tweezerPoint;
            using_tweezers (tweezerPoint.x, tweezerPoint.y);
        } else if (scalpelUse && command == "suture") {
            coord coordBeginSuture;
            coord coordEndSuture;
            make_suture (coordBeginSuture.x, coordEndSuture.x, coordBeginSuture.y, coordEndSuture.y, finish);
        }
    }
    return 0;
}
