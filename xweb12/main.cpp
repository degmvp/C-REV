#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<class T>
void imp(T V){
    cout << V  << endl;
}

template<class Iter, class X>
int contar(Iter b, Iter e, X valor){
int C = 0;
for(Iter it = b; it != e; ++it){
    if(*it == valor)
        C++;
    }
    return C;
}


int main()
{
    cout << "funcao imp usando inteiro 123 " << endl;
    imp(123);
    cout << "funcao imp usando double  45.6 " << endl;
    imp(45.6);
    cout << "funcao imp usando string  C++ 17 " << endl;
    imp("C++ version17");
    cout << "funcao imp usando char  C " << endl;
    imp('C');


    vector<int> V = {3,7,1,1,8,7,9,2,1,2,4,5,1,
                     3,3,5,1,4,2,6,7,5,4,6,2,1};

    int n = count(V.begin(), V.end(), 1);
    cout << "O numero de ocorrencias 1 : " << n << endl;
    cout << endl;


    string alf = "Degmar Gomes Barbosa";
    int m = count(alf.begin(), alf.end(), 'a');
    cout << alf << endl;
    cout << "Letra A aparece " << m << " vezes" << endl;
    cout << endl;

    int n1 = contar(V.begin(), V.end(), 1);
    cout << "O numero usando contar() ocorrencias 1 : " << n1 << endl;
    cout << endl;

    string alf1 = "Programando em C++ Degmar Barbosa";
    int m1 = contar(alf1.begin(), alf1.end(), 'a');
    cout << alf1 << endl;
    cout << "Letra A aparece " << m1 << " vezes" << endl;
    cout << endl;

    return 0;
}
