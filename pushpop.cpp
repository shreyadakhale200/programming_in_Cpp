#include <iostream>
using namespace std;

class Stack
{
protected:
    int arr[10], num;
    int index = 0;

public:
    void push(int num)
    {
        if (index <= 10)
        {
            arr[index] = num;
            index++;
        }
        try
        {
            if (index > 10)
                throw 19;
        }
        catch (int no)
        {

            if (no == 19)
                cout << "Stack is full.\n";
        }
    }

    void pop()
    {
        try
        {

            if (index <= 0)
                throw 1;
            cout << "Top most element is arr[" << index << "]=" << arr[--index] << endl;
            arr[index]--;
        }
        catch (int no)
        {
            if (no == 1)
                cout << "Stack is empty.\n";
        }
    }
    void display()
    {
        int i;
        for (i = 0; i < index; i++)
        {
            cout << "arr[" << i << "]= " << this->arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.push(80);
    s1.push(90);
    s1.push(100);
    s1.display();
    // s1.push(10);
    cout << "\n";
    /*s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.display();
    s1.pop();*/
    return 0;
}