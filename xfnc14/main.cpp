#include <iostream>


using namespace std;

int main() {
    // Bitwise OR: Sets a bit to 1 if the corresponding bits in either operand are 1
    int num1 = 14;  // Binary: 1110
    int num2 = 25;  // Binary: 11001
    int result = num1 | num2;  // Binary: 11111 (31 in decimal)


    cout << "Binary: 1110  - num1 decimal 14" << endl;
    cout << "Binary: 11001 - num2 decimal 25" << endl;
    cout << "Bitwise: num1 | num2" << endl;

    std::cout << "Result of bitwise OR: " << result << std::endl;

    return 0;
}
