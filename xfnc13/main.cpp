#include <iostream>

using namespace std;

int main() {
    // Bitwise AND: Sets a bit to 1 only if the corresponding bits in both operands are 1
    int num1 = 14;  // Binary: 1110
    int num2 = 25;  // Binary: 11001
    int result = num1 & num2;  // Binary: 1100 (12 in decimal)

    cout << "Binary: 1110  - num1 decimal 14" << endl;
    cout << "Binary: 11001 - num2 decimal 25" << endl;
    cout << "Bitwise: num1 & num2" << endl;
    cout << "Result of bitwise AND: " << result << endl;

    return 0;
}
