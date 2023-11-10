#include <iostream>
#include <memory>
#include <stdlib.h>

using namespace std;
#include <stdio.h>
#include <conio.h>
#include <math.h>

void f(int a1, int &a2, int *a3)
{
 a1 = 1; // altera cópia local
 a2 = 2; // altera a variável passada (b2 de main)
 *a3 = 3; // altera o conteúdo do endereço de b3
}
     struct Adata {
        string nome;
        string sexo;
        int idade;
        float peso;
        float altura;
    } P2;

main()
{
    cout << "Passagem de struct por referencia" << endl;



    cout << "Referencia &  um ponteiro para o objeto" << endl;
    int a = 10;
    int& b = a;
    printf("a=%d, b=%d\n", a, b); // produz a=10, b=10
    a = 3;
    printf("a=%d, b=%d\n", a, b); // produz a=3, b=3
    b = 7;
    printf("a=%d, b=%d\n", a, b); // produz a=7, b=7

    int b1 = 10, b2 = 20, b3 = 30;
    f(b1, b2, &b3);
    printf("b1=%d, b2=%d, b3=%d\n"
           , b1, b2, b3);
 //   setbuf(stdin, NULL);
    P2.nome  = "Degmar Barbosa";
    P2.sexo  = "m";
    P2.idade = 76;
    P2.peso  = 125.5;
    P2.altura= 1.90;
    cout << "struct Adata - nome : " << P2.nome << endl;
    cout << "struct Adata - sexo : " << P2.sexo << endl;
    cout << "struct Adata - idade: " << P2.idade << endl;
    cout << "struct Adata - sexo : " << P2.peso  << endl;
    cout << "struct Adata - idade: " << P2.altura << endl;

    system("pause");
	return 0;
}
