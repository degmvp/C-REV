#include <iostream>
#include <memory>

class carro{
public:
    int vel=0;
    int getvel() {
       return vel;
    }
    void setvel(int v)
    {
      this->vel=v;
    }
};
using namespace std;

int main(){

    cout << "SMART POINTER - unique_ptr" << endl;
    unique_ptr<carro>c1(new carro);
    unique_ptr<carro>c2(new carro);
    c1->setvel(100);
    c2->setvel(120);

    cout << "velocidade c1: " << c1->getvel() << endl;
    cout << "velocidade c2: " << c2->getvel() << endl;
    return 0;
}
