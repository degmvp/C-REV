#include <iostream>

using namespace std;

int main()
{
    int total = 66;
    int * ptr;

    ptr = &total;
    cout << "mapeando ponteiro ptr declara total = 66 " << endl;
    cout << "declara ponteiro  int *ptr "  << endl;
    cout << "conteudo de total      = "  << total << endl;
    cout << "conteudo apontado *ptr = "  << *ptr  << endl;

    cout << "endereco de &total     = "  << &total << endl;
    cout << "conteudo de ptr        = "  <<  ptr << endl;

    *ptr = *ptr + 1;
    cout << "altera *ptr = *ptr + 1 = "  << total << endl;

    return 0;
}
