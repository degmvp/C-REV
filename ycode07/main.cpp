#include <iostream>

using namespace std;

int getBit(int number, int position) {
    return (number >> position) & 1;
}

int main() {
    // Example Usage
    int integer_value = 37;
    int bit_position = 5;

    int bit_value = getBit(integer_value, bit_position);

    cout << "Bit value at position " << bit_position << ": " << bit_value << endl;

    return 0;
}
