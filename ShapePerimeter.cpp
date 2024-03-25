// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes. Begin with a base
// class Shape and then create derived classes like Circle, Rectangle, and
// Triangle.
//  Each shape should have methods for calculating area and perimeter specific
// to its geometry.
#include <iostream>
using namespace std;

class Shape
{
    virtual void CalculateArea() = 0;

    virtual void CalculatePerimeter() = 0;
};

class Circle : protected Shape
{
    int radius = 0;
    const float pi = 3.14;
    // area of circle = pi * r * r;
    // perimeter of circle = 2 * pi * r;
public:
    Circle() { radius = 3; }

    Circle(int radius) { this->radius = radius; }

    void CalculateArea()
    {
        int area = pi * radius * radius;
        cout << "Area of Triangle = " << area << endl;
    }

    void CalculatePerimeter()
    {
        int perimeter = 2 * pi * radius;
        cout << "Perimeter of Triangle = " << perimeter << endl;
    }

    void display()
    {
        CalculateArea();
        CalculatePerimeter();
    }
};

class Rectangle : protected Shape
{
    int length = 0;
    int width = 0;

    // area of circle = l * w;
    // perimeter of circle = 2 * (l + w);
public:
    Rectangle()
    {
        int length = 3;
        int width = 4;
    }

    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }

    void CalculateArea()
    {
        int area = length * width;
        cout << "Area of Triangle = " << area << endl;
    }

    void CalculatePerimeter()
    {
        int perimeter = 2 * (length + width);
        cout << "Perimeter of Triangle = " << perimeter << endl;
    }

    void display()
    {
        CalculateArea();
        CalculatePerimeter();
    }
};

class Triangle : protected Shape
{
    int breadth = 0;
    int height = 0;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;

    // area of triangle = 0.5 * (b * h);
    // perimeter of triangle = s1 + s2 + s3;
public:
    Triangle()
    {
        int breadth = 3;
        int height = 4;
        int s1 = 6;
        int s2 = 7;
        int s3 = 8;
    }

    Triangle(int breadth, int height, int s1, int s2, int s3)
    {
        this->breadth = breadth;
        this->height = height;
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    void CalculateArea()
    {
        int area = 0.5 * breadth * height;
        cout << "Area of Triangle = " << area << endl;
    }

    void CalculatePerimeter()
    {
        int perimeter = s1 + s2 + s3;
        cout << "Perimeter of Triangle = " << perimeter << endl;
    }

    void display()
    {
        CalculateArea();
        CalculatePerimeter();
    }
};

int main()
{
    int radius = 0;
    cout << "Enter radius = ";
    cin >> radius;
    Circle c(radius);
    c.display();

    int length = 0, width = 0;
    cout << "Enter length = ";
    cin >> length;
    cout << "Enter width = ";
    cin >> width;
    Rectangle r(length, width);
    r.display();

    int breadth = 0, height = 0, s1 = 0, s2 = 0, s3 = 0;
    cout << "Enter breadth and height = ";
    cin >> breadth >> height;

    cout << "Enter side 1, sid 2 and side 3 = ";
    cin >> s1 >> s2 >> s3;
    Triangle t(breadth, height, s1, s2, s3);
    t.display();
}