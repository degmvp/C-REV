#include <iostream>
using std::cout;
using std::endl;

template<typename T> void trocar(T & a, T & b);

template<typename T>
void trocar(T & a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
    cout << "valor parametro i: " << a <<  " valor parametro j: " << b << endl;
}

using namespace std;

int main()
{
    int i = 10;
    int j = 20;
    double x = 24.5;
    double y = 81.7;

    cout << "valores originais: " << endl;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "x = " << x << ", y = " << y << endl << endl;

    trocar(i, j);
    trocar(x, y);

    return 0;
}
