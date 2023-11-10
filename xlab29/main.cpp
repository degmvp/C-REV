#include <iostream>
#include <memory>
class carro{
private:
    int velmax;
 /*
    void setvelmax(int vm){
        velmax=vm;
    }
  */
public:
    int potencia;
    const char* nome;

    int getvelmax(){
        return velmax;
    }

    carro(const char* n, int p):nome(n),potencia(p){ //lista de inicializacao
    if(p<100){
        velmax=120;
    }else if(p<200){
        velmax=220;
    }else{
         velmax=350;
    }
    }
};
using namespace std;

int main()
{
    cout << "class C++ moderno - lista de inicializacao no construtor"  << endl;
    cout << "Usando Inicializacao Uniforme "  << endl;
    cout << "Usando Class private - Encapsulamento "  << endl;
    carro c1("Gol",150);
    cout << c1.nome << " - " << c1.potencia << " - " << c1.getvelmax() << endl;

    cout << "Usando Smart Pointer "  << endl;
    unique_ptr<carro>c2(new carro{"Honda",85});
    cout << c2->nome << " - " << c2->potencia << " - " << c2->getvelmax() << endl;

    carro c3{"turbo",400};
    cout << c3.nome << " - " << c3.potencia << " - " << c3.getvelmax() << endl;
    return 0;
}
