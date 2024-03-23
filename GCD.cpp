// 6. Accept two numbers and calculate GCD of them.
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter number 1 = ";
    cin >> number1;
    cout << "Enter number 2 = ";
    cin >> number2;

    int minNumber;
    if (number1 > number2)
        minNumber = number2;
    else
        minNumber = number1;
    int divisor = 1;
    cout << "GCD of both numbers are = ";
    while (divisor <= minNumber)
    {
        if (number1 % divisor == 0 && number2 % divisor == 0)
        {
            cout << divisor << " ";
        }
        divisor++;
    }
}