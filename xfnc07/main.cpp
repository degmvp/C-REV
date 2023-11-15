#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
    int i;

	cout << "Programa: " << argv[0] << endl;

	if (argc > 1) {
        cout << "Argc inseridos: " << argc << endl;
        for(i=0; i<argc; i++){
            cout << argv[i] << endl;
        }
	} else {
        cout << "Nao inseridos argv " << endl;
	}


	return 0;
}
