#include <iostream>
#include <vector>
#include <string>
using namespace std;

auto soma(double n1, double n2)->double {
return n1 + n2;
}

string canal(){
return "Curso de C++";
}

int main()
{
    auto num = 1945;
    auto nome = "Degmar";
    auto valor = 10.5;

    auto res=soma(10.3,5.2);

    cout << "Classe de armazenamento - auto" << endl;
    cout << res << endl;
    cout << "inicializacao uniforme" << endl;
/*
    vector<int>V;
    V.push_back(10);
    V.push_back(20);
    V.push_back(30);
    V.push_back(40);
    V.push_back(50);
    V.push_back(60);
    V.push_back(70);
    V.push_back(80);
*/

    vector<int>V{10,20,30,40,50,60,70,80};

for(auto it=V.begin(); it!=V.end();it++){
    cout << *it << endl;
}



    return 0;
}
