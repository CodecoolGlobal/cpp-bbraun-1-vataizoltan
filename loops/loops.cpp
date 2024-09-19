#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // TODO: Print the numbers array using
    // traditional for loop

    for (unsigned int i=0; i<10; i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;

    // Do-while loop
    unsigned int j=0;
    do
    {
        cout<<numbers[j]<<" ";
        j++;
    }
    while(j<10);
    cout<<endl;
    // While loop
    unsigned int k=0;
    while(k<10)
    {
        cout<<numbers[k]<<" ";
        k++;
    }
    cout<<endl;
    // Range-based for loop 
    for(unsigned int l:numbers)
    {
        cout<<l<<" ";
    }
    
    return 0;
}