#include <iostream>

using namespace std;

int main() 
{
    // Write a program  which produces the given sequence numbers
    // (in alternating arrangement and reverse order) using the throw_with_nested
    // looping statement:
    // 5, 1, 4, 2, 3, 3, 2, 4, 1, 5

    cout << "\n\nUsing while loop: \n";
    int i = 5;
    int j = 1;

    while (i >= 1) {
        cout << i << ", " << j << ", ";
        i--;
        j++;
    }

    cout << "\n\nUsing do-while loop: \n";

    i = 5;
    j = 1;

    do {
        cout << i << ", " << j << ", ";
        i--;
        j++;
    } while (i >= 1);

    cout << "\n\nUsing for loop: \n";

    i = 5;
    j = 1; 

    for (int i = 5, j = 1; i >= 1; i--, j++) {
    cout << i << ", " << j << ", ";
}




    return 0;
}