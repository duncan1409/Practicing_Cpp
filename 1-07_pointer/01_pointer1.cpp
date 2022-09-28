#include <iostream>

using namespace std;
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
}