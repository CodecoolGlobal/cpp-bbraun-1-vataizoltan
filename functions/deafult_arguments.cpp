#include <iostream>
#include <string>

using namespace std;

// TODO: implement a function that prints a message a given number of times, by default once
void printMessage(const string &s, int x = 1)
{
    for(int i=1;i<=x;i++)
    {
        cout<<s<<endl;
    }
}

int main()
{
    printMessage("Hello, world!");
    printMessage("This is a repeated message", 3);
}