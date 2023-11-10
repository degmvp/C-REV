
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    cout << "CURSO EXCRIPT - ANOTACOES!" << endl;
    cout << "GERA TABUADA  - class 29/31" << endl;
    cout << "Informe numero da tabuada" << endl;
    int n=0;
    cin >> n;

    for(int i=0; i<10; i++)
    {
        cout <<  i << " x " << n << " = " << i*n << endl;
    }
    cout << "Comando while usando num++"  << endl << endl;
    int num=0;
    while(num < 10)
    {
        cout << num << "  ";
        num++;
    }
    cout << endl;
    cout << "Comando while usando nm--"  << endl << endl;
    int nm=10;
    while(nm >=  0)
    {
        cout << nm << endl;
        nm--;
    }

    system("pause");
    return 0;
}
