// 3:Create a abstract class Shape with pure virtual method area;
// Create Rectangle,Circle,Square class..inherit them from Shape class..Override
// area method. Test these all classes by creating object of respective class.

#include <iostream>
using namespace std;

static const double pi = 3.14;

class Shape
{
    virtual float
    CalculateArea() = 0; // Data member in pure virtual function which is an
                         // abstract function should be the same as the data
                         // member in the child class as it must be overriden.
};

class Rectangle : public Shape
{
private:
    int length = 0, breadth = 0;
    int getlength() { return length; }

    int getbreadth() { return breadth; }

public:
    Rectangle()
    {
        cout << "--------Default Rectangle Constructor--------" << endl;
        length = 10;
        breadth = 30;
    }

    void setlength(int length) { this->length = length; }
    void setbreadth(int breadth) { this->breadth = breadth; }

    Rectangle(int length, int breadth)
    {
        cout << "--------Parameterized Rectangle Constructor--------" << endl;
        this->length = length;
        this->breadth = breadth;
    }

    float CalculateArea() { return length * breadth; }
    void display()
    {
        cout << "Area of rectangle is : " << CalculateArea() << endl;
    }

    friend void getLengthBreadth(Rectangle &r);
};

class Circle : public Shape
{
private:
    int radius = 0;
    int getradius() { return radius; }

public:
    Circle()
    {
        cout << "--------Default Circle Constructor--------" << endl;
        radius = 10;
    }

    void setradius(int radius) { this->radius = radius; }

    Circle(int radius) { this->radius = radius; }

    float CalculateArea() { return pi * radius * radius; }
    void display() { cout << "Area of circle is : " << CalculateArea() << endl; }

    friend void getradius(Circle &r);
};

class Square : public Shape
{
private:
    int side = 0;
    int getside() { return side; }

public:
    Square()
    {
        cout << "--------Default Square Constructor--------" << endl;
        side = 10;
    }

    void setSide(int side) { this->side = side; }

    Square(int side)
    {
        cout << "--------Parameterized Square Constructor--------" << endl;
        this->side = side;
    }

    float CalculateArea() { return side * side; }
    void display() { cout << "Area of a Square is : " << CalculateArea() << endl; }

    friend void getside(Square &s); // Declaration of friend function
};