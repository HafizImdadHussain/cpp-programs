// Program: Calculate area of a circle

#include <iostream>
using namespace std;

int main()
{
    float radius;
    const float PI = 3.1416;

    cout << "Enter radius: ";
    cin >> radius;

    float area = PI * radius * radius;
    cout << "Area of Circle = " << area << endl;

    return 0;
}
