#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt=("Construtor da class string");
    cout << txt << endl;
    cout << "Funcoes da class string" << endl;
    cout << txt.at(3) << " Funcao txt.at(3) " << endl;
    cout << "  Funcao txt.front('x') " << endl;
    cout << "  Funcao txt.back ('x') " << endl;
    cout << txt.size() << " tamanho string" << endl;
    txt.resize(20);
    cout << txt.size() << " resize() string" << endl;
    cout << txt.capacity() << " maximo size string" << endl;
    txt.shrink_to_fit();
    cout << txt.capacity() << " capacity size string" << endl;

    txt.clear();
    if(txt.empty()){
        cout << "string vazia" << endl;
    }else{
        cout << txt << endl;
     }

     string alf("degmar barbosa");
     alf.append(" - Programando C++ 17");
     cout << alf << endl;
     alf.append( "c++");

     cout << alf << endl;

     alf.assign("Camila Camilets");
     cout << alf << endl;
     alf.insert(7," - babylove ");
     cout << alf << endl;
     alf.erase(18,9);
     cout << alf << endl;
     string ast("**************************************");
     string al(" ");
     al.replace(0,40,ast);
     cout << al << endl;
     alf.swap(ast);
     cout << alf << endl;
     cout << ast << endl;
     cout << alf << endl;
    return 0;
}
