#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
 int i, j, m[3][3];
 //captura os elementos
 for(i=0;i<3;i++)
 for(j=0;j<3;j++){
 printf("Elemento[%d][%d]= ",i,j);
 scanf("%d",&m[i][j]);
 }
 //EXIBIR VALORES ORIGINAIS
 cout << "::: Valores originais :::" << endl;
 for(i=0;i<3;i++){
 for(j=0;j<3;j++)
 printf("%d ",m[i][j]);
 printf("\n");
 }
 //multiplica por 5
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 m[i][j]=m[i][j]*5;
 //EXIBIR VALORES MULTIPICADOS
 cout << "::: Valores Multiplicados por 5:::" << endl;
 for(i=0;i<3;i++){
 for(j=0;j<3;j++)
 printf("%d ",m[i][j]);
 printf("\n");
 }
 return 0;
}
