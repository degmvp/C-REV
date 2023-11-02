// C++ program to illustrate the iteration
// in Map without using iterator
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

// Driver Code
int main()
{

    // Declare the map
    map<int, string> Mp;

    map<int,string>::iterator itmap;

    // Inserting values in Map
    Mp[1] = "Mouse";
    Mp[2] = "Teclado";
    Mp[3] = "Monitor";
    Mp[4] = "Cx.Som";
    Mp[5] = "gabinete";
    Mp[6] = "Memoria";
    Mp[7] = "camera";
     // using insert pair
    Mp.insert(pair<int,string>(8,"SSD 240GB"));

       itmap=Mp.find(3);
       if(itmap==Mp.end()){
           cout << "Produto não encontrado" << endl;
       }else{
            cout << "Produto em estoque" << endl;
            cout << "Codigo: "  << itmap->first << " - Produto: " << itmap->second << endl;
            }

    // Iterate using value in Map
    for (auto it : Mp) {

        // Print the elements
        cout << it.first << ' '
             << it.second << endl;
    }

    // Iterate using for
    //Mp.erase(5);

    //Mp.erase(Mp.begin(),Mp.find(5));
    Mp.erase(Mp.find(3),Mp.find(6));
    // Mp.clear;
    for(int i=0;i<9;i++){
        if(i > 2 & i < 6) {continue;
        }else {
            cout << Mp[i] << endl;
        }
    }
    return 0;
}
