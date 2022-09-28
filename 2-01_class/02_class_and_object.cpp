#include <iostream>
#include <string>

using namespace std;

/*
객체지향은 추상화를 할 수 있기 때문에 유용하다!
*/

class Player //구조체와 유사
{
private:
  int _health;
  int _power;
  string _name;

public:
  Player(int health, int power, string name)
  {
    _health = health;
    _power = power;
    _name = name;
  }
  void attack(Player &target)
  {
    cout << "Attack" << _name << "->" << target._name << endl;
    target.damged(_power);
  }
  void damged(int power)
  {
    _health -= power;
    if (_health <= 0)
      cout << "Died. " << _name << endl;
  }
};

//클래스와 구조체의 차이점. 클래스는 외부에서의 접근이 불가능함!

int main()
{
  Player david{200, 100, "David"}; // player0은 Player의 instance
  Player daniel{200, 100, "Daniel"};

  david.attack(daniel);
  david.attack(daniel);
}