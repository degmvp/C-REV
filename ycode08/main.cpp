#include <iostream>
#include <fstream>

using namespace std;

int calculateChecksum(const string& filename) {
    ifstream file(filename, ios::binary);

    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return -1; // Return -1 to indicate an error
    }

    int checksum = 0;
    char ch;

    while (file.get(ch)) {
        checksum += static_cast<int>(ch);
    }

    file.close();

    return checksum;
}

int main() {
    string filename;

    cout << "Enter the name of the text file: ";
    cin >> filename;

    int checksum = calculateChecksum(filename);

    if (checksum != -1) {
        cout << "Checksum of the file \"" << filename << "\": " << checksum << endl;
    }

    return 0;
}
