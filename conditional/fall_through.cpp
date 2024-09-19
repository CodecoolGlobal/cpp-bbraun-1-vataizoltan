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
    switch(int day =getRandomNumber())
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
        cout<<"invalid"<<endl;
        break;
    }
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

    switch(choice)
    {
        case 3: 
            cout<< "Dinner"<<" ";
            [[fallthrough]];
        case 2: 
            cout<< "Lunch"<<" ";
            [[fallthrough]];
        case 1: 
            cout<< "Breakfast"<< " ";
            
        default:
            cout<<"invalid";
            break;
    }
}

int main()
{
    selectMenu();
    printDayOfWeek();
    
    return 0;
}