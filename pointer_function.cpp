#include <iostream>
using namespace std;

int printptr(int *num)
{
    return *num = 54;
}

int main()
{
    int m = 34;
    int *ptrm;
    ptrm = &m;
    int display = printptr(ptrm);
    cout << display;
}