#include <iostream>

using namespace std;

class employee {
public:
     string name;
     string company;
     int age;

     void introyou(){
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
     }
     employee(string nome, string comp, int idade){
        name = nome;
        company = comp;
        age = idade;
     }
};

int main()
{
    employee employ1 = employee("Salania", "YT-Code",25);
    employ1.introyou();

    employee employ2 = employee("Degmar", "C++ OOP-Code",75);
    employ2.introyou();
;


    system("pause");
    return 0;
}
