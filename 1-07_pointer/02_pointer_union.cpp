#include <iostream>
using namespace std;
union Union
{
  int i;
  float f;
  double d;
};
int main()
{
  Union u;

  int *ip = (int *)&u;
  float *fp = (float *)&u;
  double *dp = (double *)&u;

  u.i = 1;
  cout << *ip << endl;//int로 선언한 포인터만 제대로 된 값이 출력된다.
  cout << *fp << endl;
  cout << *dp << endl;
  printf("-------------------\n");
  u.f=1;
  cout << *ip << endl;
  cout << *fp << endl;//float로 선언한 포인터만 제대로 된 값이 출력된다.
  cout << *dp << endl;
  printf("-------------------\n");
  u.d=1;
  cout << *ip << endl;
  cout << *fp << endl;
  cout << *dp << endl;//double로 선언한 포인터만 제대로 된 값이 출력된다.
 
  //결론: 왜 포인터가 타입을 가지고 있는가? 주소 값에 있는 값을 어떤 식으로 취급할지 정하기 위해서 존재한다!
  
}