#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<class T,int N>
struct Vec{
    T valores[N];
};

template<class T, int N>
void imp(Vec<T, N> V) {
    for(T X: V.valores)
        cout << X << ' ' << endl;
        cout << endl;
}

int main()
{
    cout << "template de vetor float 3D " << endl;
    cout << endl;
    Vec<float, 3> V = {33.2,44.7,55.8};
    imp(V);

    cout << "template de vetor int 2D " << endl;
    cout << endl;
    Vec<int, 2> u = {4,5};
    imp(u);

    cout << "template de vetor char 5D " << endl;
    cout << endl;

    Vec<char, 5> W = {'a', 'b', 'c', 'd', 'x'};
    imp(W);
    return 0;
}
