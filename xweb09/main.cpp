#include <iostream>
#include <vector>


using namespace std;

int main()
{
    cout << "------------------" << endl;
    cout << "   Fucoes lambda" << endl;
    cout << "------------------" << endl;

    auto maior = [](int n1, int n2)->int{
        return (n1>n2)?n1:n2;
    };

    cout << "retorno lambda..." << maior(12,26) << "  o maior valor "  << endl;

    auto grt=[](vector<int>n)->int{
        auto m =0;
        for(int x:n){
        m=(m>x)?m:x;
    }
    return m;
    };
    cout << "valores da lista - 10.20.30,44.55,66,77,80" << endl;
    cout << grt({10,20,30,44,55,66,77,80}) << "  o maior na lista "  << endl;

    int x1,x2,x3,x4;
    x1=10;
    x2=20;
    x3=33,
    x4=44;

    auto soma=[=]()->int{
    return x1+x2+x3+x4;
    };

    cout << "a soma de x1 + x2 + x3 + x4..." << soma() << endl;




}

