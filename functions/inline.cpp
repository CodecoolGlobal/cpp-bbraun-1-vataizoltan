#include <iostream>

using namespace std;

// TODO: implement an inline function that checks if a character is a vowel
inline bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
    {
        return true;
    }
    else
    {
        return false;
    }
}


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