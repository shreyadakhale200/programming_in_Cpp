#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number to calculate the factors of a number = ";
    cin >> number;

    int factors = 1;
    cout << "Factors of " << number << " are = ";
    while (factors <= number)
    {
        if (number % factors == 0)
        {
            cout << factors << " ";
        }
        factors++;
    }
}