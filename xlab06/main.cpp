#include <iostream>
using namespace std;

void exibir();

int main()
{

    cout << "variavel static 1 inicial " << endl;
    cout << "mantem o valor enquanto estiver executando" << endl;
	for (int i = 0; i < 5; ++i)
		exibir();

    cout << "o valor incrementado mantido" << endl;
  	for (int i = 0; i < 5; ++i)

		exibir();
}

void exibir()
{
	// variável estática
	static int cont = 1;
	cout << cont++ << endl;
}
