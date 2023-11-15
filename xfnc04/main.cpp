#include <iostream>
#include <bitset>
#include <sstream>

using namespace std;

int main() {
    // Input binary number as a string
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    // Convert binary to decimal
    bitset<32> bits(binaryNumber);
    unsigned int decimalNumber = bits.to_ulong();

    // Convert decimal to hexadecimal
    stringstream hexStream;
    hexStream << std::hex << decimalNumber;
    string hexNumber = hexStream.str();

    // Display the result
    cout << "Hexadecimal equivalent: 0x" << hexNumber << endl;

    // Convert hexadecimal to decimal
    stringstream decStream(hexNumber);
    unsigned int decimalFromHex;
    decStream >> hex >> decimalFromHex;

    // Display the decimal equivalent
    cout << "Decimal equivalent: " << decimalFromHex << endl;

    return 0;
}
