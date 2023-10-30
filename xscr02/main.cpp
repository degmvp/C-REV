#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, y;
    x = 13;
    y = 9;

    double d = x / (y + 1.0);

    cout << "o valor de x e y sao: " << x << ", " << y << endl;
    cout << "a soma entre x e y e:          " << x + y << endl;
    cout << "a subtracao entre x e y e:     " << x - y << endl;
    cout << "a multiplicacao entre x e y e: " << x * y << endl;
    cout << "a divisao entre x e y e:       " << d     << endl;


    system("pause");
    return 0;
}
