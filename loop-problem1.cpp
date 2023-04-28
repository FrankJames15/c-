/*
    write a program that calculates and produces these two colums
    sequence numbers using the three looping statements
        sequence     Nos Squared
            1            1
            2            4
            3            9
            4            16
            5            25
*/ 

#include <iostream>

using namespace std;

int main()
{
// ---------------------------------------------------------------------------------------------

    // Using While loop
    cout << "Using While loop\n\n";

    int num = 1;
    int numSquared = 1;

    cout << "Sequence\tNos Squared" << endl;

    while (num <= 5)
    {
        cout << num << "\t\t" << numSquared << endl;
        num++;
        numSquared = num * num;
    }

    cout << endl;

    num = 1;
    numSquared = 1;

// ---------------------------------------------------------------------------------------------
cout << "--------------------------------------------------\n\n";
    // Using Do While loop
    cout << "Using Do While loop\n\n";

    cout << "Sequence\tNos Squared" << endl;

    do
    {
        cout << num << "\t\t" << numSquared << endl;
        num++;
        numSquared = num * num;
    } while (num <= 5);

    cout << endl;

// ---------------------------------------------------------------------------------------------
cout << "--------------------------------------------------\n\n";
    // Using For loop
    cout << "Using For loop\n\n";

    cout << "Sequence\tNos Squared" << endl;

    for (num = 1; num <= 5; num++)
    {
        numSquared = num * num;
        cout << num << "\t\t" << numSquared << endl;
    }
    
// ---------------------------------------------------------------------------------------------
    return 0;
}