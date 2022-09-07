std::string scalpel () {
    return "The incision was made";
}

std::string hemostat (double x, double y, double xBegin, double xEnd,double yBegin, double yEnd) {
    double k = (yEnd - yBegin)/(xEnd - xBegin);
    double b = yBegin - k * xBegin;
    if (y == k*x + b) {
        return "The hemostat is installed";
    } else {
        return "Wrong place to install the hemostat";
    }
}

std::string tweezers (double x, double y, double xBegin, double xEnd,double yBegin, double yEnd) {
    double k = (yEnd - yBegin)/(xEnd - xBegin);
    double b = yBegin - k * xBegin;
    if (y == k*x + b) {
        return "The tweezer was used";
    } else {
        return "Wrong place to use the tweezer";
    }
}

bool suture (double xBeginIncision, double xEndIncision, double yBeginIncision, double yEndIncision, double xBeginSuture, double xEndSuture, double yBeginSuture, double yEndSuture) {
    return (xBeginIncision == xBeginSuture && xEndIncision == xEndSuture && yBeginIncision == yBeginSuture && yEndIncision == yEndSuture);
}