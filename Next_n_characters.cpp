// 3. Write a program to accept a character, an integer n and display the next
//  n characters.
#include <iostream>
using namespace std;

int main()
{
    char character;
    int number;
    cout << "Enter character = ";
    cin >> character;

    cout << "Enter number = ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (character > 'z')
            character = 'a';
        cout << character++ << " ";
    }
}