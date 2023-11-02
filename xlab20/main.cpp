#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int>y{10,20,30,40,50,60,70,80,90,100};

    int x[10]{10,20,30,40,50,60,70,80,90,100};

     for(int i:x)
     {
         cout << "for com base em intervalo...." << i << endl;
     }
         cout << "for-range-declaration...."  << endl;

          for(auto i:y)
     {
         cout << "for com vector intervalo...." << i << endl;
     }
         cout << "string nome .... const char* nome"  << endl;
      return 0;
}
