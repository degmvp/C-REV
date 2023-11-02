#include <iostream>
#include <vector>

using namespace std;
auto soma(double n1, double n2)->double{
     return n1+n2;
}
void somador(){
static auto i=0;
++i;
cout << i << "...usando static auto..." << endl;
}

string canal() {
       return "DGB Cursos  ";
}
int main()
{
    cout << canal();
    auto num=10;
    auto nome=" Degmar ";
    auto valor=10.5;
    cout << num << nome << valor << endl;

    auto res=soma(10.3,15.2);
    cout << "total da soma ..res " << res << endl;

    vector<int>vet{10,20,30,40};

    vet.push_back(77);
        vet.push_back(88);
            vet.push_back(99);

    for(vector<int>::iterator it=vet.begin(); it!=vet.end();++it)
    {
        cout << *it << "...usando vector<int>::iterator it" << endl;
    }

    for(register auto it=vet.begin(); it!=vet.end();++it)
    {
        cout << *it <<  "...usando regtister auto it" << endl;
    }
      somador();
        somador();
            somador();
                somador();
    return 0;
}
