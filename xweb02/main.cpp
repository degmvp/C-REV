#include <iostream>

using namespace std;

int somavet(int vet[], int n);


    int somavet(int vet[], int n)
    {
        int soma = 0;
        for (int i = 0; i < n; ++i)
            soma += vet[i];
        return soma;
    }

int main()
{
    float prova[3];   // cria vetor de 3 elementos
    prova[0] = 6.8f;  // atribui valor 1 -elemnto
    prova[1] = 5.5f;  // atribui valor 2 -elemnto
    prova[2] = 6.2f;  // atribui valor 3 -elemnto

    float trab[3] = {2.5f, 3.0f,1.2f};  // cria e inicializa vetor

    cout << "Notas\n" << endl;
    cout << prova[0] + trab[0] << endl;
    cout << prova[1] + trab[0] << endl;
    cout << prova[2] + trab[0] << endl;

    float tot = 0.0f;
    for (int i = 0; i < 3; ++i)
        tot += prova[i] + trab[i];

    cout << "A media das notas e: "  << tot/3.0f << endl;

    const int Qtd = 7;
    int vendas[Qtd] = {1, 1, 0, 4, 1, 3, 0};
    int total = somavet(vendas, Qtd);
    cout << "Total de vendas: " << total << "\n";

}
