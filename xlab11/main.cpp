#include <iostream>
#include <stack>
using namespace std;
// Estrutura enum
// Stack - Pilha

int main()
{
    enum armas{fuzil=100,revolver=8,rifle=12,escopeta=11};
    armas armasel; // variavel do tipo enum

    cout << "variavel do tipo enum" << endl;
    cout << "---------------------" << endl;
    armasel=fuzil;
    cout << armasel << endl;
    armasel=revolver;
    cout << armasel << endl;
    armasel=rifle;
    cout << armasel << endl;
    armasel=escopeta;
    cout << armasel << endl;
    // stack

    stack <string> cartas;
    if(cartas.empty()){
        cout << "pilha vazia\n\n";
    }

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da pilha: " << cartas.size() << "\n";
    cout << "carta do topo : " << cartas.top() << "\n";

    cartas.pop();
    cout << "Nova carta do topo: " << cartas.top() << "\n";

    cartas.pop();
    cout << "Nova carta do topo: " << cartas.top() << "\n";

    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    while(!cartas.empty()){
        cout << "carta do topo : " << cartas.top() << "\n";
        cartas.pop();
    }
    if(cartas.empty()){
        cout << "pilha vazia\n\n";
    }
    return 0;
}
