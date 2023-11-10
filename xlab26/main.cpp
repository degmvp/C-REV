#include <iostream>
#include <stdlib.h>
//////////////////////////////////////
// POO-CLASSES-PUBLIC-PRIVATE-METODOS//
// STARTED HERE                      //
//////////////////////////////////////
using namespace std;
class cpu{
public:
      int vel=0;
      int velmax;
      string tipo;
      void ini(int tp);
private:
    };
void cpu::ini(int tp)
{
  if(tp==1)
  {
      this->velmax=1024;
      this->tipo="ddr4";
  }else if(tp==2)
  {
      this->velmax=800;
      this->tipo="ddr3";
  }else if(tp==3)
  {
      this->velmax=500;
      this->tipo="ddr2";
  }
}

int main()
{
   cout << "objeto mem da class cpu " << endl;
   cpu *mem=new cpu();
   mem->ini(3);
   cout << mem->velmax << "......" << mem->tipo << "\n";

   mem->ini(2);
   cout << mem->velmax << "......" << mem->tipo << "\n";

   mem->ini(1);
   cout << mem->velmax << "......" << mem->tipo << "\n\n";

   cout << "objeto chip da class cpu " << endl;
   cpu *chip=new cpu();
   chip->ini(3);
   cout << chip->velmax << "......" << chip->tipo << "\n";

   chip->ini(2);
   cout << chip->velmax << "......" << chip->tipo << "\n";

   chip->ini(1);
   cout << chip->velmax << "......" << chip->tipo << "\n";


   system("color 0F");
    return 0;
}
