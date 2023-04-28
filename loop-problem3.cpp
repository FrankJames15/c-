/*
    Write a program to calculate the factorial value of the input number.
    Use the incrementation formula for yous solution instead of 
    decrementing formula. Apply the three looping statements for your solution.
        Enter a No: 4
        Factorial: 24
*/

#include <iostream>

using namespace std;

int main()
{
    int num; 
    cout << "Enter a No: ";
    cin >> num;

    int i = 1;
    int factorial = 1;

    // using while loop
    cout << "\nUsing While loop\n\n";

    while(i <= num)
    {
        factorial *= i;
        i++;
    }

    cout << "Factorial value: " << factorial << endl;

    cout << "\n--------------------------------------------------\n\n";
    
    cout << "Using Do While loop\n\n";
    // using do while loop

    i = 1;
    factorial = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i <= num);

    cout << "Factorial value: " << factorial << endl;

    cout << "\n--------------------------------------------------\n\n";
    
    cout << "Using For loop\n\n";
    // using for loop

    factorial = 1;
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    cout << "Factorial value: " << factorial << endl;

    return 0;
}