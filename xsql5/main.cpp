#include <iostream>
#include<cmath>

using namespace std;


int main() {
    // Initialize result to 1
    unsigned long long result = 1;

    // Perform the multiplication 64 times
    for (int i = 0; i < 64; ++i) {
        result *= 2;
    // Output the result
    cout << i  << " = " << result << endl;

    }



    return 0;
}
