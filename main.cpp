#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <iomanip>
#include "main.h"

using namespace std;

int triangleArea(double base, double height) {
    return (base * height) * 0.5;
}


int rectangleArea(double length, double width)
{
    return length * width;
}
void handleRectangleArea()
{
    cout << "Enter the length and width of your rectangle" << endl;
    double length;
    double width;
    cin >> length >> width;
    cout << "Area of your rectangle is:" << endl;
    cout << rectangleArea(length, width) << endl;
}

double circleArea(double radius) {
    return M_PI  * pow(radius, 2);
}

void handleCircleArea()
{
    cout << "Enter the radius of your circle" << endl;

    double radius;
    cin >> radius;

    cout << "Area of your circle is:" << endl;
    cout << circleArea(radius) << endl;
}



int main()
{
	cout << setprecision(2) << fixed;
    int type;

    cout << "Pick an option:\n1.Radius of a circle\n2.Rectangle Area\n3.Triangle Area\n4.End Program" << endl;
    cin >> type;

    switch (type)
    {
    case 1:
        handleCircleArea();
        break;
    case 2:
        handleRectangleArea();
        break;
    case 3:
        
        break;
    default:
        break;
    }


    return 0;
}