#include <iostream>
#include <fstream>

using namespace std;
const int Tam = 60;

int main()
{
    char arquivo[Tam];
    ifstream fin;

    cout << "Digite nome do arquivo: ";
    cin.getline(arquivo, Tam);
    fin.open(arquivo);

    if (!fin.is_open())
    {
        cout << "Abertura do arquivo " << arquivo << " falhou " << endl;
        cout << "Programa encerrado \n";
        exit(EXIT_FAILURE);
    }
    double valor;
    double soma = 0.0;
    int cont = 0;

    fin >> valor;
    while(fin.good())
    {
        ++cont;
        soma+= valor;
        fin >> valor;
    }
    if (fin.eof())
        cout << "fim de arquivo \n";
    else if (fin.fail())
        cout << "tipo incorreto de dado na entrada \n";
    else
        cout << "entrada encerrada inexistente \n";

    if (cont == 0)
        cout << "Nenhum valor lido \n";
    else
    {
        cout << "itens lidos: " << cont << endl;
        cout << "Soma: " << soma << endl;
        cout << "Media: " << soma / cont << endl;
    }
    fin.close();
    return 0;
}





