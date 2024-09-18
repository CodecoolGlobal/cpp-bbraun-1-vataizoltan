#include <iostream>

using namespace std;

// TODO: implement a function that swaps two integers

// TODO: implement a function that returns the length of a string

int main()
{
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    string text = "Hello, world!";
    int len = getLength(text);
    cout << "The length of the string is: " << len << endl;

    return 0;
}
