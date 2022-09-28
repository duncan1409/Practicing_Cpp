#include <iostream>
using namespace std;
int main()
{
  printf("----str0, str1----\n");
  char str0[] = "abcd";
  char *str1 = str0;
  cout<<str0<<endl;
  cout<<str1<<endl;

  printf("----typeid hello----\n");
  const char *str2 = "hello";
  cout << typeid(*str2).name() << endl; //가장 뒤에 NULL이기 때문에 5글자 + 1

}