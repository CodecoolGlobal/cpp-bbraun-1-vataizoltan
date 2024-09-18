#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};

// TODO: implement a function that calculates a new point (x + 1, y + 1) based on the input

// TODO: implement a function that calculates the distance between two points

int main()
{
    Point result = calculatePoint(2, 8);
    cout << "The calculated point is: (" << result.x << ", " << result.y << ")" << endl;

    auto [p1, p2, dist] = calculatePointAndDistance(1, 1, 2, 2);
    cout << "Point 1: (" << p1.x << ", " << p1.y << "), Point 2: (" << p2.x << ", " << p2.y << "), Distance: " << dist << endl;

    return 0;
}