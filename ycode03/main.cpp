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

    unsigned char alf = 1;
    cout << "valor de unsigned char alf = :" << int(alf) << endl;
    alf = ~alf;
    cout << "valor de unsigned char alf NOT :" << int(alf) << endl;

    // Determine the number of bits in an unsigned char
    int numBits = sizeof(alf) * 8;

    // Use bitwise operators to print the binary representation
    cout << "Binary alf (unsigned char): ";
    for (int i = numBits - 1; i >= 0; --i) {
        cout << ((alf >> i) & 1);
    }
    unsigned char ax = 1;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char ax = :" << int(ax) << endl;
    ax = ax << 3;
    cout << "valor char ax shift left << 3 :" << int(ax) << endl;
        cout << "Binary ax (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((ax >> i) & 1);
    }
    unsigned char bx = 8;
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char bx = :" << int(bx) << endl;
    bx = bx >> 2;
    cout << "valor char bx shift left >> 2 :" << int(bx) << endl;
        cout << "Binary bx (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((bx >> i) & 1);
    }
    cout << endl;
    cout << "------------------------------------" << endl;

    unsigned char cx = 170;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char cx = :" << int(cx) << endl;
    cx = cx & 15;
    cout << "valor char cx & 15 :" << int(cx) << endl;
        cout << "Binary cx (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((cx >> i) & 1);
    }
    cout << endl;
    cout << "------------------------------------" << endl;

    unsigned char dx = 170;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char dx = :" << int(dx) << endl;
    dx = dx | 15;
    cout << "valor char dx | 15 :" << int(dx) << endl;
        cout << "Binary gx (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((dx >> i) & 1);
    }
    cout << endl;
    cout << "------------------------------------" << endl;

    unsigned char ex = 170;
    cout << "------------------------------------" << endl;
    cout << "------------------------------------" << endl;
    cout << "valor de unsigned char ex = :" << int(ex) << endl;
    ex = ex ^ 15;
    cout << "valor char ex ^ 15 :" << int(ex) << endl;
        cout << "Binary ex (unsigned char): ";
        for (int i = numBits - 1; i >= 0; --i) {
        cout << ((ex >> i) & 1);
    }
    cout << endl;
    cout << "------------------------------------" << endl;
























}
