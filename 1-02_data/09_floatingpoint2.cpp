#include <iostream>
using namespace std;
int main()
{
    float num_0 = 1.0;
    double num_1 = 1.0;
    long double num_2 = 1.0;

    cout << sizeof(num_0) << endl;
    cout << sizeof(num_1) << endl;
    cout << sizeof(num_2) << endl;

     cout << sizeof(1.0f) << endl;
    cout << sizeof(1.0) << endl;
    cout << sizeof(1.0L) << endl;
}