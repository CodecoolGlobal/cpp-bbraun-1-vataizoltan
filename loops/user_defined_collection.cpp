#include <iostream>

using namespace std;

class SimpleArray
{
public:
    SimpleArray(int size) : size(size)
    {
        data = new int[size];
    }

    ~SimpleArray()
    {
        delete[] data;
    }

    int &operator[](int index) { return data[index]; }
    const int &operator[](int index) const { return data[index]; }

    int *begin() { return data; }
    int *end() { return data + size; }

private:
    int *data;
    int size;
};

int main()
{
    SimpleArray myArray(5);
    for (int i = 0; i < 5; ++i)
    {
        myArray[i] = i;
    }

    // TODO: Use the range-based for loop to print the values of myArray
    for(auto a:myArray)
    {
        cout<<a<<" ";
    }
}