#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

using namespace std;

int main()
{
    /* possible values:
    'A'
    2023
    149600000
    true
    u'\u2665'
    1000000
    5.972e24
    U'\U0001F60A'
    9.99f
    L'Ʃ'
    */

    // TODO: Initialize primitive types
    bool isStudent = true;
    char grade = 'A';
    wchar_t sum = L'Ʃ'; // wide char type, greater than 1 byte, char can contain 0-255, dupla annyi
    char16_t heart = u'\u2665'; // type for UTF-16 character representation, required to be large enough to represent any UTF-16 code unit (16 bits).
    char32_t smile = U'\U0001F60A'; //  type for UTF-32 character representation, required to be large enough to represent any UTF-32 code unit (32 bits)
    short year = 2023; // short - target type will be optimized for space and will have width of at least 16 bits.
    int population = 1000000;
    long long distanceToSun = 149600000; // long long - target type will have width of at least 64 bits. long - target type will have width of at least 32 bits.
    float price = 9.99f;
    double massOfEarth = 5.972e24;

    wstring_convert<codecvt_utf8_utf16<char16_t>, char16_t> convert16;
    wstring_convert<codecvt_utf8<char32_t>, char32_t> convert32;

    string utf8_emoji = convert16.to_bytes(heart);
    string utf8_emoji2 = convert32.to_bytes(smile);

    cout << "Is student? " << isStudent << endl;
    cout << "Grade: " << grade << endl;
    cout << "Heart: " << heart << endl;
    cout << "Emoji: " << utf8_emoji << endl;
    cout << "Emoji2: " << utf8_emoji2 << endl;
    cout << "Year: " << year << endl;
    cout << "Population: " << population << endl;
    cout << "Distance to Sun: " << distanceToSun << " km" << endl;
    cout << "Price: $" << price << endl;
    cout << "Mass of Earth: " << massOfEarth << " kg" << endl;
    return 0;
}