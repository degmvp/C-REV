#include <iostream>
#include <vector>
#include <map>

using namespace std;
struct pessoa{
    string nome;
    int idade;
};
class veiculo{
public:
    int tipo;
    string nome;
};
int main()
{
    int num{10};
    string nome{"  Degmar"};
    cout << "Inicializacao uniforme c++17..  " << num  << nome << endl;

    vector<int>valores{1,2,3,4,5,6};
    cout << "vetor.." << valores[5] << endl;
    for(vector<int>::iterator it=valores.begin(); it!=valores.end();it++)
    {
        cout << *it << endl;
    }
    map<string,string>capitais{{"DF","Brasilia"}};
    for(map<string,string>::iterator it=capitais.begin(); it!=capitais.end();it++)
    {
        cout << it->first << " - " << it->second << endl;
    }

    pessoa p1{"degmar ",78};
    pessoa p2{"kecio ",37};
    cout << "struct..." << p1.nome << p1.idade << endl;
    cout << "struct..." << p2.nome << p2.idade << endl;
    veiculo v1{1,"carro"};
    cout << "class....tipo..nome.." << v1.tipo << " " << v1.nome << endl;

    return 0;
}
