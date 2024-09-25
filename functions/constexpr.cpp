#include <iostream>

using namespace std;

// TODO: implement a function that returns the factorial of a number

int factorial(int x = 5)
{
    if (x>=2)
    {
        return x*factorial(x-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    // TODO: call the factorial function with an argument of 5
    
    cout << "The factorial of 5 is: " << factorial() << endl;

    int inputNumber = 4;
    cout << "The factorial of " << inputNumber << " is: " << factorial(inputNumber) << endl;

    return 0;
}