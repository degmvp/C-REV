#include <iostream>

using namespace std;

class veiculo{
private:
    const char* nome;
    const char* cor;
public:
    int velmax;
    int rodas;
    void setnome(const char* no){
        nome=no;
    }
    const char* getnome(){
        return nome;
    }
    void setcor(const char* co){
        cor=co;
    }
    const char* getcor(){
        return cor;
    }
virtual void imp(){
        cout << "Uso de Class - Metodo Virtual - Private..: " << endl;
        cout << "Nome............: " << nome << endl;
        cout << "Cor;............: " << cor  << endl;
        cout << "Rodas...........: " << rodas << endl;
        cout << "Vel.Max.........: " << velmax << endl << endl;
    }
};
class carro:public veiculo{
public:
    carro(){
        velmax=160;
        rodas=4;
        setnome("fusca");
        setcor("Branco");
    }
};
class moto:public veiculo{
public:
    moto(){
        velmax=200;
        rodas=2;
        setnome("moto-LX");
        setcor("Preta");
    }
};
class militar:public veiculo{
public:
    int municao;
    bool armamento;
    militar(bool arma,int mu):armamento(arma),municao(mu){
        velmax=150;
        rodas=6;
        setnome("tanque");
        setcor("Verde");
        if(arma){
            municao=mu;
        }else{
            municao=0;
        }
    }
 void imp()override{
        cout << "Uso de Heranca - Override - inicializacao uniforme..: " << endl;
        cout << "Nome............: " << getnome() << endl;
        cout << "Cor;............: " << getcor()  << endl;
        cout << "Rodas...........: " << rodas << endl;
        cout << "Vel.Max.........: " << velmax << endl;
        cout << "Armamento.......: " << armamento << endl;
        cout << "Municao.........: " << municao << endl << endl;
    }


};

int main()
{
carro v1;
v1.imp();

moto v2;
v2.imp();

militar v3{false,200};
v3.imp();


militar v4{true,100};
v4.imp();

    return 0;
}
