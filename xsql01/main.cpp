#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int numero;
    string nome;
    ifstream inFile;

    inFile.open("saida.txt", ios::in);
    if (!inFile) {
        cout << "Arquivo saida.txt nao pode ser aberto" << endl;
        abort();
    }

    cout << setiosflags(ios::left)
         << setw(10) << "Numero"
         << setw(50) << "Nome" << endl;

    // Read all records from the file
    string line;
    while (getline(inFile, line)) {
        // Skip empty lines
        if (line.empty()) {
            break;
        }

          // Use stringstream to extract values from the line
        istringstream iss(line);
        if (iss >> numero >> nome) {
            cout << setiosflags(ios::left)
                 << setw(10) << numero
                 << setw(50) << nome << endl;
        } else {
            cout << "Error reading line: " << line << endl;
        }
    }

    inFile.close();
    return 0;
}
