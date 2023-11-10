#include <iostream>
#include <memory>
#include <stdlib.h>

class Carro{
public:
    int vel=0;
    int getVel(){
        return vel;
    }
    void setVel(int v){
        vel=v;
    }
};

using namespace std;

int main()
{
    cout << "\nSMART POINTERS - unique_ptr" << endl;

/*
    int *pnum;
    int  num=10;
    pnum=&num;
    cout << *pnum << " - " << pnum << endl;
    delete pnum;

    unique_ptr<int>pnum(new int);
    *pnum=10;
    cout << *pnum << " - " << &pnum << endl;

    string* str=new string("Pointers Comum -string");
    cout << *str << " - tamanho: " << str->size() << endl;
    delete str;

    unique_ptr<string>str(new string("Smart Pointer - string"));
    cout << *str << " - tamanho: " << str->size() << endl;

*/
/*
    Carro *c1=new Carro();
    cout << "Velocidade: "  << c1->getVel() << endl;
    delete c1;
*/
    unique_ptr<Carro>c1(new Carro);
    unique_ptr<Carro>c2(new Carro);
    c1->setVel(1945);
    c2->setVel(1983);
    cout << "Velocidade c1: "  << c1->getVel() << endl;
    cout << "Velocidade c2: "  << c2->getVel() << endl;

    system("pause");
    return 0;
}
