#include <iostream>

using namespace std;

int divisao_de_dez_por( int divisor )
{
   // prevendo entrada inv�lida
   if( divisor == 0 )
   {
      throw "divisao por zero";
   }

   return 1945 / divisor;
}

int main()
{
   int div, result;

   cin >> div; // obt�m do usu�rio um n�mero inteiro

   try
   {
      result = divisao_de_dez_por( div );
      cout << "1945  " << "dividido por: " << div  << endl;
      cout << "resultado "  << result << endl;
   }
   catch( const char *e )
   { // c�digo ser� redirecionado para c� caso ( div == 0 )
      result = 0; // recupera��o do sistema
      cout << "Houve uma excecao: " << e << endl;
   }
}
