#include <iostream>
#include <vector>
using namespace std;

int main()
{

vector<int> num;
vector<int> num1;

int tam,i;

num.push_back(1);
num.push_back(2);
num.push_back(3);
num.push_back(4);

num1.push_back(5);
num1.push_back(6);
num1.push_back(7);
num1.push_back(8);

num.swap(num1);

tam=num.size();

cout << "tamanho do vector: "  << tam << endl;
cout << "elementos do vetor num : 1 - 2 - 3 - 4"  << endl;
cout << "elementos do vetor num1: 5 - 6 - 7 - 8"  << endl;
cout << "abaixo os elementos depois do swap()  "  << endl;
cout << "---------------------------------------" << endl;

for(i=0; i<tam; i++)
{
    cout << num[i] << " ";
}
cout << "vector num"  << endl;

for(i=0; i<tam; i++)
{
    cout << num1[i] << " ";
}
cout << "vector num1"  << endl;
cout << "---------------------------------------" << endl;
cout << "operacao de swap num/num1" << endl;

    return 0;
}
