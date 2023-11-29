#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------------------------" << endl;
	cout << "Tipos inteiros " << endl;
    cout << "-----------------------------------------------" << endl;
	cout << "char (8 bits)  " << endl;
    cout << "short int(16 bits) " << endl;
    cout << "int (32 bits)  " << endl;
    cout << "long int (32 bits)  " << endl;
    cout << "long long int (64 bits)  " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Todos os tipos inteiros sao tipos com sinal + -" << endl;
    cout << "-----------------------------------------------" << endl;

    cout << "-----------------------------------------------" << endl;
	cout << "Tipos caractere " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "-----------------------------------------------" << endl;
	cout << "Tipo char armazena inteiros de 8 bits " << endl;
    cout << "numeros de -128 a 127 para char" << endl;
    cout << "numeros de 0 a 255 para unsigned char" << endl;
    cout << "char numero = 65; " << endl;
    cout << "o tipo char um inteiro para armazenar caractere" << endl;
    cout << "char letra = 'A'; " << endl;
    cout << "-----------------------------------------------" << endl;
    char ch = 'A';
    int i = ch;
    cout << "o codigo ASCII para " << ch << ": " << i << endl;
    ch = ch + 1;
    i = ch;
    cout << "adicionando 1 ao codigo de A" << endl;
    cout << "o codigo ASCII para " << ch << ": " << i << endl;
    cout << "---------------------------------------------------" << endl;
        for (int i = 65; i <= 90; ++i) {
        char letter = static_cast<char>(i);
        cout << letter << " ";
    }
    cout << std::endl;
    cout << "---------------------------------------------------" << endl;
        for (int i = 97; i <= 122; ++i) {
        char letter = static_cast<char>(i);
        cout << letter << " ";
    }

    cout << endl;

    bool aviso = 0;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    cout << "o valor zero bool aviso " << sizeof(aviso) << "(byte)" << endl;

    bool alf = 45;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    if (alf == true) {
        cout << "o valor 45 bool alf sera 1 " << sizeof(alf) << "(byte)" << endl;
    }

	return 0;
}


