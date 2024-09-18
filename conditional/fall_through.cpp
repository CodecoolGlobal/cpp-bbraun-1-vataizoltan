#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int getRandomNumber()
{
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 10 + 1;
    return randomNumber;
}

void printDayOfWeek()
{
    // TODO: Implement the switch statement
}

void selectMenu()
{
    cout << "Select an option:" << endl;
    int choice;
    cout << "1. Breakfast" << endl;
    cout << "2. Breakfast & Lunch" << endl;
    cout << "3. Breakfast, Lunch & Dinner" << endl;
    cin >> choice;

    // TODO: Implement the switch statement, using fallthrough effect
}

int main()
{
    selectMenu();
    printDayOfWeek();
    
    return 0;
}