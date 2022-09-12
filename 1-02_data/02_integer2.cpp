#include <iostream>
using namespace std;
int main()
{
    int num_0 = 11;
    int num_1 = 011;  // 0~ : octal numbers
    int num_2 = 0b11; // 0b : binary numbers
    int num_3 = 0x11; // 0x : hexadecimal numbers

    cout << "num_0: " << num_0 << endl; // 11
    cout << "num_1: " << num_1 << endl; // 8 + 1 = 9
    cout << "num_2: " << num_2 << endl; // 2 + 1 = 3
    cout << "num_3: " << num_3 << endl; // 16 + 1 = 17
}