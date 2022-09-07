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
}

void using_hemostat (double& x, double& y) {
    std::cout << "Enter the coordinates of the hemostat position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> x;
    std::cout <<  "y = ";
    std::cin >> y;
}

void using_tweezers (double& x, double& y) {
    std::cout << "Enter the coordinates of the tweezer position" << std::endl;
    std::cout <<  "x = ";
    std::cin >> x;
    std::cout <<  "y = ";
    std::cin >> y;
}

void make_suture (double& xBegin, double& xEnd, double& yBegin, double& yEnd) {
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
}