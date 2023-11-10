#include <iostream>
#include <memory>
#include <stdlib.h>

using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
#include<ctype.h>



int main() {
int i,j,x,y;
	char ch='*';
	cout << "---------------------------------------" << endl;
	cout << "imprime um QUADRILATERO em forma de * " << ch  << endl;
	cout << "---------------------------------------" << endl;
	cout << "Digite numero de linhas: " << endl;
	cin >> x;
	cout << "Digite numero de colunas: " << endl;
	cin >> y;
	cout << endl;
		for(i=1;i<=x;i++){
			for(j=1;j<=y;j++){
                cout << " " << ch;
			}
			cout << endl;
		}
	 return 0;
}


