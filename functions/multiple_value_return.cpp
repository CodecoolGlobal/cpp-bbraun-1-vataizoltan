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

Point calculatePoint(int x, int y)
{
    Point result;
    result.x=x+1;
    result.y=y+1;
    return result;
}

// TODO: implement a function that calculates the distance between two points
tuple<Point, Point, int> calculatePointAndDistance(int x, int y, int v, int z)
{ 
    Point p1;
    Point p2;
    p1.x=x;
    p1.y=y;
    p2.x=v;
    p2.y=z;
    double dist = sqrt((z-y)*(z-y)+(v-x)*(v-x));
    return make_tuple(p1,p2,dist);


}

int main()
{
    Point result = calculatePoint(2, 8);
    cout << "The calculated point is: (" << result.x << ", " << result.y << ")" << endl;

    auto [p1, p2, dist] = calculatePointAndDistance(1, 1, 2, 2);
    cout << "Point 1: (" << p1.x << ", " << p1.y << "), Point 2: (" << p2.x << ", " << p2.y << "), Distance: " << dist << endl;

    return 0;
}