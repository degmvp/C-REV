#include <iostream>
using namespace std;

int main(){
 int i, v[5];
 //captura os elementos
 for(i=0;i<5;i++){
 printf("Elemento[%d]= ",i);
 scanf("%d",&v[i]);
 }
 //EXIBIR VALORES ORIGINAIS
 cout << "::: Valores originais :::" << endl;
 for(i=0;i<5;i++)
 printf("%d\n",v[i]);
 //EXIBIR VALORES ORIGINAIS
 cout << "::: Valores originais :::" << endl;
 for(i=4;i>=0;i--)
 printf("%d\n",v[i]);
 return 0;
}
