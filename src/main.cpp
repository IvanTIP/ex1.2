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
            using_scalpel ();
        } else if (scalpelUse && command == "hemostat") {
            using_hemostat ();
        } else if (scalpelUse && command == "tweezers") {
            using_tweezers ();
        } else if (scalpelUse && command == "suture") {
            make_suture (finish);
        }
    }
    return 0;
}