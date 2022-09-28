#include <iostream>
using namespace std;

int main()
{
  cout << 40 - 32 / 2 << "==" << 24 << endl;
  cout << 4 - 6 + 2 + 8 / 2 / 2 * 2 << endl;

  printf("Right-to-left\n");
  int a, b, c;
  a = b = c = 10;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  int x(10);
  int y = 10;

  int num1, num2 = 0;
  cout << --num1 << endl;
  cout << num1 << endl;
  cout << num2-- << endl;
  cout << num2 << endl;
}