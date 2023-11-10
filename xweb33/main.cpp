
#include <iostream>

using namespace std;
class Axclass{
  int x;
public:
  Axclass(int x_=0){
    cout << "construtor default\n";
    x= x_;
    print();
  }
  Axclass(const Axclass
           &a){
    cout << "construtor copia\n";
    x = a.x;
    print();
  }
  void print(){
    cout << "x = " << x << "\n";
  }
};
int main()
{

  Axclass x;
  Axclass y(1);
  Axclass z = x;
  Axclass w = y;
  Axclass k(y); // mesmo que Alo k = y; !

  cout << "CONSTRUTOR COPIA!" << endl;
    return 0;
}
