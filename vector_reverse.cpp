#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        v.push_back(num); // Add the input number to the vector
    }

    reverse(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";

    return 0;
}
