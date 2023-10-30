#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream arquivo;
    string linha;
    char linha_b[255];

    arquivo.open("cfbcursos.txt",fstream::in|fstream::out|fstream::app);

    cout << "in = input(leitura)" << endl;
    cout << "out = output(escrita)" << endl;
    cout << "binary = modo binario" << endl;
    cout << "ate = abre para escrita e posiciona no final" << endl;
    cout << "app =  append" << endl;
    cout << "trunc = truncate" << endl;

    if(arquivo.is_open()){// verifica se o aarquivo esta aberto
        arquivo << "Curso de C++ " << endl  << "Biblioteca fstream" << endl;
    }else{
         cout << "arquivo nao esta aberto" << endl;
         }
    arquivo.close();
    cout << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "Lendo o arquivo gerado cfbcursos.txt" << endl;
    cout << "-----------------------------------------------" << endl;

    arquivo.open("cfbcursos.txt",fstream::in);
    if(arquivo.is_open()){
        while(getline(arquivo,linha)){
            cout << linha << endl;
        }
    }else{

         cout << "arquivo nao esta aberto" << endl;
         }
    arquivo.close();
    cout << endl;
}
