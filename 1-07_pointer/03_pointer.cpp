#include <iostream>
using namespace std;

int main()
{
  //pointer의 상수화...?
  int num = 10;
  const int *pNum = &num;
  int* const pNum = &num;

  int num0 = 20;
  pNum = &num0;
}