#include <iostream>
using namespace std;
int main()
{
    //파일 압축 및 암호화, 네트워크 프로그래밍을 할 때는 크기를 정확히 표현할 필요성이 있다.
    //이런 경우에는 fixed-width integers를 사용하면 유용하다.
    // std namespace에 정의된 cstdint 헤더를 include해서 사용한다.
    int8_t num_0 = 0;
    int16_t num_1 = 0;
    int32_t num_2 = 0;

    cout << sizeof(num_0) << endl;
    cout << sizeof(num_1) << endl;
    cout << sizeof(num_2) << endl;

    //결론: 8bit는 8로 나누면 1bit, 2bit, 4bit임을 알 수 있다.
}