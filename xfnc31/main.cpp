// booleano.cpp – tipo booleano
#include <iostream>
using namespace std;

int main()
{
	bool buzinar = 0;   // buzina desligada
	cout << "Buzinar? ";
	cin >> buzinar;         // leitura de um booleano

	if (buzinar == 1)
		cout << "buzinar\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
	else
		cout << "Silencio!" << endl;

	return 0;
}
