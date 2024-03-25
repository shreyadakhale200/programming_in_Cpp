#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int no1;
    int no2;
    
    cin >> no1;
    cin >> no2;
    string num[] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    
    for(int i=no1;i<=no2;i++)
    {
        if(i>9)
        {
            if(i%2==0)
            cout << "even";
            else
            cout << "odd";
        }
        else
        cout << num[i-1] << endl;
    }

    return 0;
}