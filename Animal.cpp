// Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes. Start with a base class
//  Animal and then create derived classes like Mammal, Bird, and Fish.
// Each of these derived classes should have specific properties and methods
//  related to their respective categories of animals.

#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;

public:
    Animal()
    {
        name = "Lion";
        age = 53;
    }

    Animal(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    virtual void eat()
    {
        cout << "Animal is eating";
    }

    virtual void sleep()
    {
        cout << "Anima is sleeping";
    }
};

class Mammal : public Animal
{
private:
    string furColor;

public:
    Mammal(string name, int age, string furColor) : Animal(name, age)
    {
        this->furColor = furColor;
    }

    void giveBirth() const { cout << "Mammal is giving birth." << endl; }

    void eat() { cout << "Mammal is eating." << endl; }

    void sleep() { cout << "Mammal is sleeping." << endl; }
};

class Bird : public Animal
{
private:
    string featherColor;

public:
    Bird(const string name, int age, string featherColor)
        : Animal(name, age), featherColor(featherColor)
    {
        this->featherColor = featherColor;
    }

    void layEggs() { cout << "Bird is laying eggs." << endl; }

    void eat() { cout << "Bird is eating." << endl; }

    void sleep() { cout << "Bird is sleeping." << endl; }
};

class Fish : public Animal
{
private:
    string scale_Type;

public:
    Fish(string name, int age, string scale_Type)
        : Animal(name, age)
    {

        this->scale_Type = scale_Type;
    }
    void swim() { cout << "Fish is swimming." << endl; }

    void eat() { cout << "Fish is eating." << endl; }

    void sleep() { cout << "Fish is sleeping." << endl; }
};

int main()
{
    Mammal lion("Leo", 5, "Golden");
    Bird sparrow("Sparry", 2, "Brown");
    Fish goldfish("Goldie", 1, "Scales");

    lion.eat();
    lion.sleep();
    lion.giveBirth();

    sparrow.eat();
    sparrow.sleep();
    sparrow.layEggs();

    goldfish.eat();
    goldfish.sleep();
    goldfish.swim();

    return 0;
}
