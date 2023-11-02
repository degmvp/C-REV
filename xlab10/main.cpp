#include <iostream>

using namespace std;

template<typename T>,
void Swap(T& a, T& b){
    T temp =a;
    a = b;
    b = temp;
}

int main()
{
    int a=5, b=7;
    cout <<  "template da funcao Swap() " << endl;
    cout <<  "valor inicial a = 5 e b = 7 " << endl;
    cout << a << " - "  << b << endl;
    Swap<int>(a, b);
    cout <<  "valor Swap() a = 7 e b = 5 " << endl;
    cout << a << " - "  << b << endl;

    char c='C', d = 'D';
    cout <<  "valor char inicial C  D " << endl;
    cout << c << " - "  << d << endl;
    Swap<char>(c, d);
    cout <<  "valor char Swap D  C " << endl;
    cout << c << " - "  << d << endl;
    return 0;
}
