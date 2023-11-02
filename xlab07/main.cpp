#include <iostream>

using namespace std;

template<typename T>
void impVetor(const T* valores, int quantidade){
    for(int i=0; i<quantidade;i++){
        cout << valores[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "template generico de funcoes" << endl;
    cout << "----------------------------" << endl;
    cout << "inicializacao vetor valores_int" << endl;
    const int valores_int[5] = {1,2,3,4,5};
    impVetor<int>(valores_int,5);

    cout << "inicializacao vetor valores_db" << endl;
    const double valores_db[7]= {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    impVetor<double>(valores_db,7);

    cout << "inicializacao vetor valores_char" << endl;
    const char valores_char[7] = "Degmar";
    impVetor<char>(valores_char,7);

    cout << "inicializacao vetor valores_float" << endl;
    const float valores_float[3] = {3.145,2.7162,9.999};
    impVetor<float>(valores_float,3);

    return 0;
}
