#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // c++ 스타일... 객체지향
    string s_0 = "hello";//c++스타일은 문자열이 어떻게 구성되어있는지 노출이 되어있지 않다.
    string s_1 = "world";
    s_0.append(s_1);//s0의 함수, s1을 s0에 붙인다.
    cout << s_0 << endl;

    // c 스타일... 절차지향
    char s_2[100] = "hello";//문자열을 char의 배열의 형태로 선언
    char s_3[] = "world";

    strcat(s_2, s_3);//문자열 연결 함수
    cout << s_2 << endl;
}