#include <iostream>

using namespace std;

int main()
{
    int castor = 101;
    int & roedor = castor; //roedor e uma referencia

    cout << "Referencia em C++ por valor/referencia ." << endl;

    cout << "castor = " << castor << endl;
    cout << "roedor = " << roedor << endl;

    roedor++;

    cout << "castor = " << castor << endl;
    cout << "roedor = " << roedor << endl;

    cout << "endereco de castor   = " << &castor << endl;
    cout << "endereco de roedor   = " << &roedor << endl;

    return 0;
}
