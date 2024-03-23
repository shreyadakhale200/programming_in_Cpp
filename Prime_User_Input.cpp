// 8. Write a program to print all prime numbers between 1 to n
#include <iostream>
using namespace std;

int main()
{
    int first_number, last_number;
    cout << "Enter the first number in the range = ";
    cin >> first_number;

    cout << "Enter the last number in the range = ";
    cin >> last_number;

    for (; first_number <= last_number; first_number++)
    {
        bool isPrime = true;
        for (int divisor = 2; divisor < first_number; divisor++)
        {
            if (first_number % divisor == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
        }
        if (isPrime)
            cout << first_number << " is prime" << endl;
        else
        {
            cout << first_number << " is not prime" << endl;
        }
    }
}