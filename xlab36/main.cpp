#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;
int i =0;
int main()
{
    cout << "CURSO EXCRIPT - ANOTACOES!" << endl;
    cout << "SWITCH   - class 33/34" << endl;
msg:

    if(i > 12) cout << "Mes inexistente!" << endl;

lab:
    cout << "Digite numero do mes ano : " << endl;
    cin >> i;

    switch(i){

        case 1: cout << "jan" << endl;
            break;
        case 2: cout << "fev" << endl;
            break;
        case 3: cout << "mar" << endl;
            break;
        case 4: cout << "abr" << endl;
            break;
        case 5: cout << "mai" << endl;
            break;
        case 6: cout << "jun" << endl;
            break;
        case 7: cout << "jul" << endl;
            break;
        case 8: cout << "ago" << endl;
            break;
        case 9: cout << "set" << endl;
            break;
        case 10: cout << "out" << endl;
            break;
        case 11: cout << "nov" << endl;
            break;
        case 12: cout << "dez" << endl;
            break;
        default:
            goto msg;
    }
    char let;
    cout << "Digite uma letra a ate c: " << endl;
    cin >> let;

    switch(let){
        case 'a':
        case 'A':
            cout << "vc digitou a letra 'a' " << endl;
            break;
        case 'b':
        case 'B':
            cout << "vc digitou a letra 'b' " << endl;
            break;
        case 'c':
        case 'C':
            cout << "vc digitou a letra 'c' " << endl;
            break;

    }

    system("pause");
    return 0;
}
