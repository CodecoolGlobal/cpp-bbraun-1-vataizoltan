#include <iostream>

using namespace std;

// TODO: implement an inline function that checks if a character is a vowel

int main()
{
    char ch = 'e';
    if (isVowel(ch))
    {
        cout << ch << " is vowel" << endl;
    }
    else
    {
        cout << ch << " is consonant" << endl;
    }
    return 0;
}