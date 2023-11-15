#include <iostream>
#include <string>

using namespace std;

string decimalToHexadecimal(int decimalNumber) {
    string hexadecimalNumber;

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;

        // Convert remainder to hexadecimal digit
        char hexDigit;
        if (remainder < 10) {
            hexDigit = '0' + remainder;
        } else {
            hexDigit = 'A' + (remainder - 10);
        }

        // Prepend the hexadecimal digit to the result
        hexadecimalNumber = hexDigit + hexadecimalNumber;

        // Update the decimal number
        decimalNumber /= 16;
    }

    // If the input was 0, the result is "0"
    if (hexadecimalNumber.empty()) {
        hexadecimalNumber = "0";
    }

    return hexadecimalNumber;
}

int main() {
    // Example usage
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string hexadecimalResult = decimalToHexadecimal(decimalNumber);

    cout << "Hexadecimal representation: " << hexadecimalResult << endl;

    return 0;
}
