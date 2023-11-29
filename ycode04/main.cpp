#include <iostream>

using namespace std;

int main()
{

    cout << "operadores bit a bit" << endl;
    cout << "------------------------------------" << endl;
    cout << "operador   cmd            uso" << endl;
    cout << "------------------------------------" << endl;
    cout << "     ~     NOT           ~expr      " << endl;
    cout << "------------------------------------" << endl;
    cout << "     <<   LEFT SHIFT expr1  << expr2" << endl;
    cout << "------------------------------------" << endl;
    cout << "     >>   RIGHT SHIFT expr1 >> expr2" << endl;
    cout << "------------------------------------" << endl;
    cout << "     &    AND        expr1  &  expr2" << endl;
    cout << "------------------------------------" << endl;
    cout << "     |    OR         expr1  |  expr2" << endl;
    cout << "------------------------------------" << endl;
    cout << "     ^    XOR        expr1  ^  expr2" << endl;
    cout << "------------------------------------" << endl;


    unsigned char flag = 8;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char flag = :" << int(flag) << endl;
    cout << "valor char flag :" << int(flag) << endl;
    // Determine the number of bits in an unsigned char
    int numBits = sizeof(flag) * 8;
    cout << "Binary ex (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((flag >> i) & 1);
    }

    cout<< endl;
    cout << "------------------------------------" << endl;
    if (flag & (1 << 3)) {
    cout << " The 4th bit (index 3) is set" << endl;
}

unsigned char fg = 0;
unsigned char mask = 0b00111000; // Mask with bits 3, 4, and 5 set to 1
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "unsigned char mask = 0b00111000;" << endl;
    cout << "valor de unsigned char fg = :" << int(fg) << endl;
    fg |= mask; // Set the bits specified by the mask
    cout << "Set the bits specified by the mask :" << int(fg) << endl;

    cout << "Binary fg (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((fg >> i) & 1);
    }
    cout<< endl;
    cout << "------------------------------------" << endl;
    cout << "bits position 3,4 and 5 of fg are set" << endl;
    cout<< endl;

}
