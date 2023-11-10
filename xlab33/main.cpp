#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    cout << "CURSO EXCRIPT - ANOTACOES!" << endl;
    cout << "Operador de atribuicao - class 25" << endl;
    cout << " = atribui da direita para esquerda!" << endl;
    cout << " += atribui a soma !" << endl;
    cout << " -= atribui a subtracao !" << endl;
    cout << " *= atribui a multiplicacao !" << endl;
    cout << " /= atribui a divisao !" << endl;
    cout << " %= atribui o modulo !" << endl;

    double n1,n2,n3,n4,soma;

    cout << "digite nota1 : " << endl;
    cin  >> n1;
    cout << "digite nota2 : " << endl;
    cin  >> n2;
    cout << "digite nota3 : " << endl;
    cin  >> n3;
    cout << "digite nota4 : " << endl;
    cin  >> n4;

    soma = n1 + n2 + n3 + n4;
    soma = soma / 4;

    cout << "a media do semestre foi: " << soma << endl;

    if(soma >= 7)
        cout << "aprovado" << endl;
    else
        cout << "reprovado"  << endl;

    system("pause");
    return 0;
}
