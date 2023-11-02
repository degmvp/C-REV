#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq;
    arq.open("lab.txt",ios::app);

    arq << "Conteudo de carga no arq.txt \n";
    arq << "usando o operador de insercao \n";
    arq << "Degmar Baqrbosa - Programando C++";
    cout << "usando ofstream!" << endl;

    arq.close();

    ifstream arqf;
    string linha;
    arqf.open("lab.txt");
    if(arqf.is_open()){
        while(getline(arqf,linha)){
            cout << linha << endl;
        }
        arqf.close();

    return 0;
}
}
