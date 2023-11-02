#include <iostream>
#include "auxiliar.h"

using namespace std;

int tamanho = 1000;

int calc(int);

int main()
{
    cout << "Ligacao Interna Externa - arquivo.h" << endl;
	cout << tamanho << endl;
    cout << "chamandofunao externa   - arquivo.h" << endl;
	cout << calc(5);
	cout << endl;

	return 0;
}

