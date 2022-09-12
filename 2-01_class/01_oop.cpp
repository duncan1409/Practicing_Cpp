#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // c++ 스타일
    string s_0 = "hello";
    string s_1 = "world";
    s_0.append(s_1);
    cout << s_0 << endl;

    // c 스타일
    char s_2[100] = "hello";
    char s_3[] = "world";

    strcat(s_2, s_3);
    cout << s_2 << endl;
}