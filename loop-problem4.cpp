/*
    Write a program that reverses the input number,
    Formulate to come up witht the anwser
        Enter a No: 1238
        Reversed No: 8321
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a No: ";

    cin >> num;

    int reversed = 0;

    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed No: " << reversed << endl;
    return 0;
}