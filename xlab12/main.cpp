#include <iostream>
#include <queue>


// Fila queue
using namespace std;


int main()
{
    // queue

    queue <string> cartas;

    if(cartas.empty()){
        cout << "fila vazia\n\n";
    }

    cartas.push("rei de copas");
    cartas.push("rei de espadas");
    cartas.push("rei de ouros");
    cartas.push("rei de paus");

    cout << "tamanho da fila: " << cartas.size() << "\n\n";
    cout << "primeira carta : " << cartas.front() << "\n";
    cout << "ultima carta.. : " << cartas.back() << "\n\n";


    while(!cartas.empty()){
        cout << "primeira carta : " << cartas.front() << "\n";
        cartas.pop();
    }
    if(cartas.empty()){
        cout << "\npilha vazia\n\n";
    }
    return 0;
}
