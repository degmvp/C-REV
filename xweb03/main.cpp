#include <iostream>

using namespace std;

int somavet(int vet[], int);


    int somavet(int vet[], int n)
    {
        cout << "(vet = "
             << vet
             << ", tamanho = "
             << sizeof vet
             << "): ";

        int soma = 0;
        for (int i = 0; i < n; ++i)
            soma += vet[i];
        return soma;
    }

int main()
{
    int vendas[7] = {1, 1, 0, 4, 1, 3, 0};
    cout << "endereco de vendas: " << vendas << endl;
    cout << "tamanho  de vendas: " << sizeof vendas << endl << endl;

    cout << "total de vendas "
         << somavet(vendas, 7) << endl;
    cout << "treis primeiros "
         << somavet(vendas, 3) << endl;
    cout << "quatro ultimos "
         << somavet(vendas + 3, 4) << endl;
}
