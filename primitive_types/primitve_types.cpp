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
    bool isStudent;
    char grade;
    wchar_t sum;
    char16_t heart;
    char32_t smile;
    short year;
    int population;
    long long distanceToSun;
    float price;
    double massOfEarth;

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