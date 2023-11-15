#include <iostream>

using namespace std;

double prog1(int);
double prog2(int);

void estimar(int linhas, double(*pf)(int));

    double prog1(int lns)
    {
        return 0.05 * lns;
    }
    double prog2(int lns)
    {
        return 0.03 * lns + 0.0004 * lns * lns;
    }


    double prog3(int lns)
    {
        return 0.02 * lns;
    }



    void estimar(int linhas, double (*pf)(int))
    {
        cout << linhas << " linhas levam ";
        cout << pf(linhas) << " hora(s)\n";
    }


int main()
{

    cout << "quantas linhas de codigo vc precisa? ";
    int code;
    cin >> code;
    cout << "estimativa de prog1:\n";
    estimar(code, prog1);
    cout << "estimativa de prog2:\n";
    estimar(code, prog2);
    cout << "estimativa de prog3:\n";
    estimar(code, prog3);

    return 0;
}
