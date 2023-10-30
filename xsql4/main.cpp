#include <iostream>
#include <iomanip>
#include <math.h>
#include <bitset>

using namespace std;


int main()
{

    float pi= 3.14159265358979323846;
    cout.precision(15);
    cout << "valor de pi: " << pi << "\n";

    float vf=135.459;
    cout.precision(-1);
    cout << "valor de vf: " << vf << "\n";

    int vi = 1983;
    cout << "valor de vi: " <<  setw(10) << setfill('x') << vi << "\n"; //set(10) width 10

    cout << "valor de vi em hexa: " << hex << vi << "\n";
    cout << "valor de vi em octal: " << oct << vi << "\n";

      // Hexadecimal representation
    std::cout << "Hexadecimal representation: " << std::hex << vi << "\n";

    // Binary representation
    std::bitset<sizeof(vi) * 8> binaryRepresentation(vi);
    std::cout << "Value binary: " << binaryRepresentation << "\n";

        return 0;
}
