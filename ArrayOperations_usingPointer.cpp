#include <iostream>
using namespace std;

int printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 34;
        return a[i];
    }
    return 0;
}

int main()
{
    // int x = 4;
    int arr[5] = {4, 5, 6, 7, 8};
    // int *ptrarr = arr;
    // ptrarr = arr;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(ptrarr + i) << " ";
    //     // *ptrarr++;
    // }
    int Display = printArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}