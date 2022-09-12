#include <iostream>
using namespace std;
int main()
{
    int intNum = 0;
    long longNum = 0;
    int *intPointer = &intNum;

    cout << sizeof(intNum) << endl;
    cout << sizeof(longNum) << endl;
    cout << sizeof(intPointer) << endl;
    
    // 시스템에 따라서 달라진다.
    // 내 컴퓨터는 64 bit systems LLP 64 시스템이기 때문에 4/4/8이 출력

}