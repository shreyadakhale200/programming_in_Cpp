#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = 7;
    int m = 1;
    int l = 1;
    
    float temp1 = static_cast<float>(num) / 2.0; // or simply n / 2.0 if n is already a float
    int temp = round(temp1);
    for (int i = 1; i <= num; i++)
    {
        l = i;

        for (int j = 1; j <= l; j++)
        {
                int p=1;
              p=p+i+j;
            if (i > temp && j > num + 1 - i) // 4 - 4 + 3 - 1 = 2 // 4-5+2 = 3 // num+1-i
            {
                l--;
                for (int k = 1; k < l; k++)
                {
                    cout << " ";
                }
            }
            else if(i==j || p==9)
            {
            cout << "+";        // cout << p;
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}