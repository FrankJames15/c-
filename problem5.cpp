/*
    Write a program that generates and displays the Finonacci 
    sequence numbers. In Fibonacci sequence, the current number
    is the sum of the previous two numbers. 
        Enter a number: 9
        Fibonacci sequence: 0 1 1 2 3 5 8 13 21 34
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int first = 0;
    int second = 1;
    int next = 0;
    
    cout << "Fibonacci sequence: ";
    for (int i = 1; i < num; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;

    return 0;
}