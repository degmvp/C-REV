#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("intro.txt");

    if (!fin.is_open())
    {
        cout << "Abertura do arquivo falhou!" << endl;
        cout << "Programa encerrado \n";
        exit(EXIT_FAILURE);
    }

    char ch;

    // Move to position 8
    for (int i = 0; i < 7; i++)
        fin >> ch;

    cout << "Character at position 7: " << ch << endl;

    // Reset the file pointer to the beginning
    fin.clear(); // Clear any error flags
    fin.seekg(0, ios::beg);

    // Display the entire content of the file
    cout << "Full content of the file:" << endl;

    while (fin.get(ch))
    {
        cout << ch << endl;
    }

    fin.close();

    return 0;
}
