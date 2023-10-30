#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string>prod;
    prod[0]="mouse";
    prod[1]="teclado";
    prod[2]="monitor";
    prod[3]="memoria";

    cout << "usando -> container MAP" << endl;
    cout << endl;


    for(auto it=prod.begin(); it!=prod.end();it++){
        cout << it->first << "  " << it->second << endl;
    }

    cout << endl;
    cout << "usando insert MAP" << endl;

    prod.insert(pair<int,string>(5,"ssd240GB"));
    prod.insert(pair<int,string>(6,"HDR1TB"));

    cout << "usando . container MAP" << endl;
    cout << endl;
    for(auto it:prod){
        cout << it.first << "  " << it.second << endl;
    }
    return 0;
}
