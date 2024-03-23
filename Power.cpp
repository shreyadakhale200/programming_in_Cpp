// 2. Write a program to accept two integers x and n and compute x raised to n.

#include <iostream>
using namespace std;

int main()
{
    int num, n;
    cout << "Enter number to calculate power = ";
    cin >> num;

    cout << "Enter the value of n = ";
    cin >> n;

    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = num * product;
    }
    cout << product;
}