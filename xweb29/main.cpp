#include <iostream>

using namespace std;

class employee {
private:
     string name;
     string company;
     int Age;
public:
     void setname(string name)  //setter
{
    name = name;
}
     string getname() {         //getter
        return name;
     }

     void setcompany(string company)  //setter
{
    company = company;
}
     string getcompany() {         //getter
        return company;
     }
    void setage(int age)  //setter
{
    if(age<=77)
    Age = age;
}
     int getage() {         //getter
        return Age;
     }

     void imp(){
        cout << "Name...... - " << name << endl;
        cout << "Company... - " << company << endl;
        cout << "Age....... - " << Age << endl;
     }
     employee(string nome, string comp, int age){
        name = nome;
        company = comp;
        Age = age;
     }
};

int main()
{
    employee employ1 = employee("Saldina", "YT-Code",25);
    employ1.imp();

    employee employ2 = employee("Degmar", "C++ OOP-Code",78);
    employ2.imp();


    employ1.setage(39);
    employ2.setage(78);
    cout << employ1.getname() <<" is " <<employ1.getage() << " years old" << endl;
    cout << employ2.getname() <<" is " <<employ2.getage() << " years old" << endl;
    system("pause");
    return 0;
}
