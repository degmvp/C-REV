#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class Pessoa {
    string nome;
    int idade;
    public:
        Pessoa(string no, int id)
        {
            idade = id;
            nome = no;
        }
        string getNome()
        {
            return nome;
        }
        int getIdade()
        {
            return idade;
        }
};

int main(){

      vector <Pessoa> VP;
      vector <Pessoa>::iterator ptr;

      VP.push_back(Pessoa("Degmar  ", 78));
      VP.push_back(Pessoa("Maria   ", 55));
      VP.push_back(Pessoa("Kecio   ", 37));
      VP.push_back(Pessoa("Wallace ", 35));

      // percorrendo a lista com indices
      for(int i = 0; i < VP.size(); i++)
      {
            cout << "Nome: " << VP[i].getNome();
            cout << " - Idade: " << VP[i].getIdade() << endl;
      }
}
