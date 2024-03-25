// Problem Statement: Model a system for handling individuals and students within 
// an educational institution. Create a base class Person with attributes like name 
// and age. Derive a Student class with additional attributes like student ID and GPA,
//  inheriting the common attributes from the Person class.

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name = "John Doe";
        age = 0;
    }

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    string studentID;
    double gpa;

public:
    Student() : Person()
    {
        studentID = "0000";
        gpa = 0.0;
    }

    Student(string name, int age, string studentID, double gpa)
        : Person(name, age)
    {
        this->studentID = studentID;
        this->gpa = gpa;
    }

    void display()
    {
        Person::display();
        cout << "Student ID: " << studentID << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main()
{
    Person p("Alice Smith", 25);
    cout << "Person Details:" << endl;
    p.display();
    cout << endl;

    Student s("Bob Johnson", 20, "2023001", 3.8);
    cout << "Student Details:" << endl;
    s.display();

    return 0;
}
