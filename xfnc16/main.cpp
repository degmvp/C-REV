#include <iostream>

using namespace std;

int main() {
    // Bitwise NOT: Flips the bits of the operand
    int num = 14;  // Binary: 1110
    int result = ~num;  // Binary: 11110001 (assuming int is 32 bits)

    cout << "Binary: 1110  - num decimal 14" << endl;
    cout << "Bitwise NOT: flips the bits 11110001 - num decimal 14" << endl;
    cout << "Result of bitwise NOT: " << result << endl;


    int resu = ~num;

    cout << "Binary representation of NOT 14: ";

    // Print binary representation
    for (int i = 31; i >= 0; --i) {
        cout << ((result >> i) & 1);
        if (i % 8 == 0)
            cout << ' ';
    }

    cout << endl;

    return 0;
}
//Binary representation of NOT 14: 11111111 11111111 11111111 11110001
