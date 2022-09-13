#include <iostream>

using namespace std;
int main()
{
    int num = 147;
    int *pointer = &num;

    cout << *pointer << endl;

    *pointer = 100;
    cout << num << endl;
    cout << *pointer << endl;
}