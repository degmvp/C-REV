#include <iostream>
#include <bitset>


using namespace std;

string decimalToBinary(int decimalNumber) {
    // Use std::bitset to directly convert the decimal number to binary
    bitset<32> binaryNumber(decimalNumber);

    // Convert the binary representation to a string
    return binaryNumber.to_string();
}

int main() {
    // Example usage
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string binaryResult = decimalToBinary(decimalNumber);

    cout << "Binary representation: " << binaryResult << endl;

    return 0;
}
