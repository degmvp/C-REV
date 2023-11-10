#include <iostream>

using namespace std;

int main()
{
    cout << "Blocos de Instrucao" << endl;
    cout << " << Operador de insercao >> Operador de extracao" << endl;

    int i = 0;
    cout << "Digite um numero: "  << endl;
    cin >> i;
    if(i==1)
    while(i < 10){
        i++;
        cout << i*i << endl;
    }

    cout << "\nOperacao Ternaria " << endl;
    cout << "\n<variavel> = (condicao) ? <valor1> : <valor2>\n " << endl;
    int y =0;
    cout << "Digite valor de y: "  << endl;
    cin >> y;
    string texto =(y <=10) ? "menor que dez..." : "maior que dez...";
    cout << "o valor de y eh: "  << texto << y << endl;

    system("pause");
    return 0;
}
