#include <iostream>
#include <string>

using namespace std;

typedef struct Estrutura {
    int x;
    int y;
}Estrutura;

class Data {
public:
    int dia;
    int mes;
    int ano;
    void print(){
        cout << dia << "/" << mes <<  "/" << ano << endl;
    }
};

int main()
{
    cout << "Ponteiro operador ponto e seta" << endl;
    cout << "Estrutura com int x e int y " << endl;
    cout << endl;

    Estrutura est;
    est.x = 12;
    est.y = 15;
    cout << "est tem valor em x: " << est.x << endl;
    cout << "est tem valor em y: " << est.y << endl;
    cout << endl;

    Estrutura *pest = &est;
    cout << "Acessando como ponteiro . ponto " << endl;
    cout << "(*pest).x" << "     (*pest).y" << endl;
    cout << "---------------------------------" << endl;

    cout << "est tem valor em x: " << (*pest).x << endl;
    cout << "est tem valor em y: " << (*pest).y << endl;
    cout << endl;

    cout << "Acessando com o ponteiro seta -> " << endl;
    cout << "pest->x" << "     pest->y" << endl;
    cout << "---------------------------------" << endl;
    cout << "est tem valor em x: " << pest->x << endl;
    cout << "est tem valor em y: " << pest->y << endl;
    cout << endl;

    cout << "Acessando class com o ponteiro . ponto " << endl;
    cout << "class Data { public: int dia - int mes - int ano " << endl;
    cout << endl;
    Data mdata;
    mdata.dia = 28;
    mdata.mes = 10;
    mdata.ano = 2023;
    mdata.print();


    cout << "Acessando class com o ponteiro -> seta " << endl;
    cout << "Data* pdata pdata = &mdata " << endl;
    cout << endl;

    Data* pdata;
    pdata = &mdata;
    pdata->dia = 28;
    pdata->mes = 10;
    pdata->ano = 2023;
    pdata->print();

    return 0;
}
