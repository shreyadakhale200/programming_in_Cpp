// 4. Write a program to calculate factorial of a number.
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120

#include <iostream>
using namespace std;

int main()
{
    int fact = 1;
    int product = 1;

    int number;
    cout << "Enter the number to calculate factorial = ";
    cin >> number;

    while (fact <= number)
    {
        product = fact * product;
        fact++;
    }
    cout << "Factorial of " << number << " is = " << product;
}