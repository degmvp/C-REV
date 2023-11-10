#include <iostream>
#include <functional>

using namespace std;
class deg{
public:
    int num;
    deg(int n):num(n){};
    int dobro(){
    return num*2;
    }
};


int soma(int n1, int n2){
    return n1+n2;
    }
;int main()
{
    int n1=10;
    const int n2=5;
    auto s1=bind(soma,n1,n2);
    cout << "Funcoes - bind - cref() - mem_fn()" << endl;
    cout << s1() << endl;
    auto n3=cref(n1);
    n1++;
    cout << n3 << endl;

    deg n8{100};
    deg n9{5};
    auto dobro2=mem_fn(&deg::dobro);

    cout << dobro2(n8) << endl;

    return 0;
}
