// 7. Write a menu driven program to do following operations :
// a) Compute area of circle
// pi*r*r
// b) Compute area of rectangle
// length * width
// c) Compute area of triangle
// 1/2 * breadth * height
// d) Exit

#include <iostream>
using namespace std;

#define PI 3.14
int main()
{
    float radius = 0, length = 0, width = 0, breadth = 0, height = 0;
    int choice;
    do
    {
        cout << "(1)Area of Circle, (2)Area of Rectangle, (3)Area of Triangle, (4)EXIT" << endl;
        cin >> choice;
        float area = 0;
        switch (choice)
        {
        case 1:
            cout << "--------------Area of Circle--------------" << endl;
            cout << "Enter radius to calculate Area of Circle = ";
            cin >> radius;
            area = PI * radius * radius;
            cout << "Area of circle is = " << area;
            cout << endl;
            break;

        case 2:
            cout << "--------------Area of Rectangle--------------" << endl;
            cout << "Enter the length and breadth to calculate Area of Rectangle = ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle is = " << area;
            cout << endl;
            break;

        case 3:
            cout << "--------------Area of Triangle--------------" << endl;
            cout << "Enter the breadth and height to calculate Area of triangle = ";
            cin >> breadth >> height;
            area = ((0.5) * breadth * height);
            cout << "Area of Triangle is = " << area;
            cout << endl;
            break;

        case 4:
            cout << "Thank You for Calculating";
            break;
        }

    } while (choice != 4);
}