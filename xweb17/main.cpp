#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::vector<int> meuVetor;  // cria um vetor de inteiros vazio

  if (meuVetor.empty())  // testa se o vetor está vazio
    cout << "Vetor vazio!" << endl;
  else
    cout << "Vetor com elementos!" << endl;

  meuVetor.push_back(7); // inclue no fim do vetor um elemento
  meuVetor.push_back(11);
  meuVetor.push_back(2006);
  meuVetor.push_back(1945);
  meuVetor.push_back(1983);

  // vai imprimir cinco elementos {7, 11, 2006,1945,1983}
  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Imprimindo o vetor...: " << meuVetor[i] << endl;

  cout << endl;
  meuVetor.pop_back();  // retira o último elemento

  // agora, só vai imprimir quatro {7, 11,2006,1945}
  for (int i = 0; i < meuVetor.size(); i++)
    cout << "Meu vetor, de novo...: " << meuVetor[i] << endl;

  system("PAUSE");
  return 0;
}


