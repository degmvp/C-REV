#include <iostream>
#include <string>

using namespace std;
string r;

string toBinary(int n) {

  while (n != 0) {
    r += (n % 2 == 0 ? "0" : "1");
    n /= 2;
  }
  return r;
}

int main() {
  int number = 0;

  cout << "Digite um numero inteiro:  " << endl;
  cin >> number;
  cout << "valor decimal: " << number << endl;
  cout << "--------------------------------" << endl;
  cout << "--------------------------------" << endl;
  cout << "conversao hexa divisao de 16 " << endl;
  cout << "binary : " << toBinary(number) << endl;
  cout << "--------------------------------" << endl;
  cout << "binary : posicional:";
  string zero1;
  zero1 = r;
  for (int i = zero1.size()-1; i >= 0; i--){
    cout << zero1[i];
  }
    cout << endl;
    cout << "--------------------------------" << endl;

  return EXIT_SUCCESS;
}
