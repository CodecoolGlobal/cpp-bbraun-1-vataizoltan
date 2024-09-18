#include <iostream>
#include <cstdlib>

using namespace std;

int *numbers;

void cleanup()
{
    if (numbers != nullptr)
    {
        delete[] numbers;
        numbers = nullptr;
        cout << "Memory deallocated successfully." << endl;
    }
}

int main()
{
    // TODO: Register the cleanup function using atexit
    
    numbers = new int[10];
    cout << "Memory allocated successfully." << endl;

    return 0;
}