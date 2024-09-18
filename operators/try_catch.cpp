#include <iostream>

using namespace std;

namespace Result {
    double result;
}

double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        // TODO: throw a runtime_error exception with the message "Division by zero!"
    }
    return numerator / denominator;
}

int main() {

    // TODO: initialize the result variable from Result namespace to 0.0
    
    // TODO: catch the exception thrown by the divide function
    
    cout << "Result of the division: " << Result::result << endl;

    return 0;
}