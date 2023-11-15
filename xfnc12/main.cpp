#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Store the value in a variable named x64
    unsigned long long x64 = 18446744073709551615ULL;

    // Print the value to verify
    cout << "Value stored in x64: " << x64 << endl;

    cout << "Value stored in y64: " << pow(2,64) << endl;


    unsigned long long y64 =  x64;
    cout << "Value stored in y64: " << y64 << endl;

    return 0;
}
