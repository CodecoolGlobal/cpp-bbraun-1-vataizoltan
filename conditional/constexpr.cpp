#include <iostream>

using namespace std;

int main()
{
    const int number = -5;

    // TODO: Use if constexpr to check if the number is positive, negative or zero.

    if constexpr (number == -5)
    {
        cout<<"number -5"<<endl;
    }
    else
    {
        cout<<"number is not -5"<<endl;
    }

    return 0;
}