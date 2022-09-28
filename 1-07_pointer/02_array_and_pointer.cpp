#include <iostream>
using namespace std;
int main()
{
  int nums[] = {1, 2, 3};
  //배열의 주소?
  int *pNums = nums;

  cout << nums << endl;
  cout << pNums << endl;
  printf("----sizeof----\n");
  cout << sizeof(nums) << endl;
  cout << sizeof(pNums) << endl;
  /*
  nums = &nums[0] 완전히 동치.

  &nums는 다르다.

  */
  printf("----typeid----\n");
  cout << typeid(1).name() << endl;
  cout << typeid(nums).name() << endl;
  cout << typeid(&nums).name() << endl;
  cout << typeid(&nums[0]).name() << endl;

  printf("----*pointer + n----\n");
  cout << *pNums << endl;
  cout << *pNums + 1 << endl;
  cout << *pNums + 2 << endl;

  printf("----*(Array + n)----\n");
  cout<<*nums<<endl;
  cout<<*(nums+1)<<endl;//4byte 이동
  cout<<*(nums+2)<<endl;//8byte 이동

  printf("----*(&Array[0] + n)----\n");
  cout<<*&nums[0]<<endl;
  cout<<*(&nums[0]+1)<<endl;
  cout<<*(&nums[0]+2)<<endl;

/*
  배열과 포인터의 차이
  포인터: 수정가능
  배열: 수정 불가.스스로 자체는 수정할 수 없다. none modifiable
*/
  printf("----dif between pointer and array----\n");  
  cout<<pNums<<endl;
  pNums++;
  cout<<pNums<<endl;
  //nums++;는 불가.

}
