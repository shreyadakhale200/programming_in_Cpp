// 1:Write a program to create an array of integers and perform following operations on that array like
// finding the sum, average, maximum and minimum number in that array. Accept the numbers of the
// array from user.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of an array = ";
    cin >> size;

    int sum = 0;
    float average = 0;

    int min = INT_MAX;
    int max = INT_MIN;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
        sum = sum + array[i];
    }
    average = static_cast<float>(sum / size);
    cout << "Sum of array is = " << sum;
    cout << "\nAverage of array is = " << average;
    cout << "\nMaximum number is = " << max;
    cout << "\nMinimum number is = " << min;
}