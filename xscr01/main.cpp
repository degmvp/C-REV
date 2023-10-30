#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
//obj cin3
//obj cout

    cout << "estudando i/o " << endl;
    cout << " (<<) manipulador de insercao " << endl;
    cout << setw(10) << 11 << endl;
    cout << setw(10) << 12 << endl;
    cout << setw(10) << 13 << endl;
    cout << setw(10) << 14 << endl;

    cout << " (>>) manipulador de extracao" << endl;
    cout << " (>>) digite um numero: " << endl;
    int num1 = 0;
    cin  >> num1;

    cout << " (>>) digite outro numero: " << endl;
    int num2 = 0;
    cin  >> num2;

    cout << " (>>) os numeros foram:   " << num1 << " e " << num2  << endl;

    cout << " valor da soma : " << endl;
    cout << num1 + num2 << endl;

    cout << " valor em hex  " << endl;
    cout << hex << num1 + num2 << endl;

system("pause");

    return 0;
}
