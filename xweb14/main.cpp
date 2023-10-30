#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template<class T>
struct Vec3{
    T valores[3];
};

template<class T>
void imp(Vec3<T> V) {
    for(T X: V.valores)
        cout << X << ' ' << endl;
        cout << endl;
}

int main()
{
    Vec3<float> V = {32.2,55.7,4.8};
    imp(V);

    Vec3<int> u = {4,5,7};
    imp(u);

    return 0;
}
