#include <iostream>   // biblioteca necess�ria para a fun��o std::cout

using namespace std;   // declara��o global do espa�o de nomes

int main( int argc, char *argv[] )
{
   int arg;   // declara uma vari�vel inteiro com o nome arg

   // atribui-se 1 a arg; enquanto arg for menor que argc, executa-se o
   // bloco e arg � incrementado em cada itera��o
   for( arg = 1; arg < argc; arg++ )
   {
      if( argv[arg][0] != '-' )
         break;

      switch( argv[arg][1] )
      {
         case 'r':   // caso possua um r ap�s o h�fen
            cout << "Argumento -r usado\n\n";
            break;
         case 'v':   // caso possua um v ap�s o h�fen
            cout << "Argumento -v usado\n\n";
            break;
         default:    // este � o valor de escape e sua respectiva mensagem:
            cout << "Nenhum argumento foi usado\n\n";
            break;
      }
   }
}
