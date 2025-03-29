#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <iomanip>
#include "main.h"

using namespace std;

int triangleArea(double base, double height) {
    return (base * height) * 0.5;
}

void handleTriangleArea()
{
    cout << "Enter the base and height of your triangle..." << endl;
    double base;
    double height;
    cin >> base >> height;
    cout << "Area of your triangle is:" << endl;
    cout << triangleArea(base, height) << endl;
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
    int type;

    cout << "Pick an option:\n1.Radius of a circle\n2.Rectangle Area\n3.Triangle Area\n4.End Program" << endl;
    cin >> type;

	cout << setprecision(2) << fixed;
    switch (type)
    {
    case 1:
        handleCircleArea();
        break;
    case 2:
        handleRectangleArea();
        break;
    case 3:
        handleTriangleArea();
        break;
    case 4:
        cout << "Programmed Stop" << endl;
        break;
    default:
        cout << "Wrong number" << endl;
        return 0;
    }


    return 1;
}