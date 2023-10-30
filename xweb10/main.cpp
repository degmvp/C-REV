#include <iostream>
#include <vector>


using namespace std;

int main()
{
    cout << "------------------" << endl;
    cout << "   Fucoes lambda"   << endl;
    cout << "------------------" << endl;

    auto soma=[](vector<int>n)->int{
        auto S =0;
        for(int x:n){
          S+=x;
    }
    return S;
    };
    cout << "valores da lista - 10.20.30,44.55,66,77,80" << endl;
    cout << soma({10,20,30,44,55,66,77,80}) << endl;

    return 0;
}

