#include <iostream>

using namespace std;

namespace Result {
    double result;
}

double divide(double numerator, double denominator) {
    
    if (denominator == 0.0) {
        throw runtime_error("Division by 0");
    }
    else{
        return numerator / denominator;
        } 
}

int main() {

    // TODO: initialize the result variable from Result namespace to 0.0
    Result::result = 0.0;
    

    // TODO: catch the exception thrown by the divide function
    try
    {
    Result::result=divide(10.0, 0.0);
    }
    catch(const std::exception& e)
    {
        std::cerr<<e.what() << '\n';
    }
    
    cout << "Result of the division: " << Result::result << endl;

    return 0;
}