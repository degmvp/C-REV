// converte.cpp - converte metros em cent�metros
#include <iostream>
using namespace std;

int converte(int);   // prot�tipo da fun��o

int main()
{
    cout << "prototipo dafuncao " << endl;
    cout << "int converte(int)"   << endl;
    cout << endl;

	cout << "Entre com a distancia em metros: ";
	int num;
	cin >> num;

	int cent = converte(num);    // inicializando com uma fun��o

	cout << num << " metros = " << cent << " centimetros.\n";

	return 0;
}

int converte(int n)    // defini��o da fun��o
{
	int val = 100 * n;
	return val;
}
