#include <iostream>
#include <numeric>
#include <limits>

using namespace std;

int main()
{
    //overflow
    uint32_t num_32 = numeric_limits<uint32_t>::max();
    uint32_t num_32_ = num_32 + 1;

    cout << num_32 << endl;
    cout << num_32_ << endl;
}