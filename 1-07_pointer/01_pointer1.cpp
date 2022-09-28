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
	int num = 147;
	int *pointer = &num; //단항 연산자 &는 주소를 나타낸다.

	cout << num << endl;
	cout << pointer << endl;
	cout << *pointer << endl; // dereferencing

	printf("---------\n");
	*pointer = 100;
	cout << num << endl; // pointer가 가리키는 변수의 값이 변함을 알 수 있다.
	cout << pointer << endl;
	cout << *pointer << endl;

	cout << "------------" << endl;
	int *pNum0 = &num;
	int *pNum1 = &num;
	int *pNum2 = pNum0;

	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;


	/*포인터가 아무 것도 안가리키는 경우,
	잘 못된 주소를 참조하는 경우는 위험하다!
	초기화를 잘 하자!

	int는 왜 달려있는가?
	*/

	cout<<"-----Union------"<<endl;
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