#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string marca;
};

int main()
{
    //inicializacao uniforme
    int num{10};

    Veiculo v1{1,"VolksWagen"};
    Veiculo v2{2,"Ford"};

    Pessoa p1{"Degmar",78};
    Pessoa p2{"Wallace",35};

    vector<int>valores{1,2,3,4,5,6,7};
    map<string,string>capitais{{"DF","Brasilia"}};

    cout << "inicializacao uniforme C++ 17" << endl;
    cout << num << endl;

    for (vector<int>::iterator it=valores.begin(); it!=valores.end(); it++)
        {
            cout << *it << "  ";
        };
        cout << endl;
        cout << "inicializacao uniforme de vetor e map" << endl;

    for (map<string,string>::iterator it=capitais.begin(); it!=capitais.end(); it++)
    {
         cout << it->first  << " - " << it->second <<endl;
    };

    cout << "Valores da struct Pessoa " << endl;
    cout << p1.nome << " - " << p1.idade << endl;

    cout << "Valores da Class Veiculo " << endl;
    cout << v1.tipo << " - "  << v1.marca << endl;
    cout << v2.tipo << " - "  << v2.marca << endl;
}



