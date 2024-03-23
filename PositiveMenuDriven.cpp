#include <iostream>
using namespace std;

int main()
{
    int number;

    do
    {
        cout << "Enter number = ";
        cin >> number;
        cout << number << endl;
    } while (number > 0);
    cout << "Out of the loop the number is negative";
}