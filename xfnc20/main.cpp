#include <iostream>

using namespace std;

int divisao_de_dez_por( int divisor )
{
   // prevendo entrada inválida
   if( divisor == 0 )
   {
      throw "divisao por zero";
   }

   return 1945 / divisor;
}

int main()
{
   int div, result;

   cin >> div; // obtém do usuário um número inteiro

   try
   {
      result = divisao_de_dez_por( div );
      cout << "1945  " << "dividido por: " << div  << endl;
      cout << "resultado "  << result << endl;
   }
   catch( const char *e )
   { // código será redirecionado para cá caso ( div == 0 )
      result = 0; // recuperação do sistema
      cout << "Houve uma excecao: " << e << endl;
   }
}
