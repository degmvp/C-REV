#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Pair...." << endl;
    const int tam=3;
    vector <pair<int,string>> prod;

    prod.push_back(make_pair(10,"mouse"));
    prod.push_back(make_pair(20,"teclado"));
    prod.push_back(make_pair(30,"monitor"));
    prod.push_back(make_pair(40,"SSD-250GB"));


    cout << "For padrao...." << endl;
    for(int i=0; i<prod.size();i++)
    {
        cout <<prod[i].first << " - " << prod[i].second << endl;
    }

    cout << "\nFor auto...." << endl;
    for(auto i:prod)
    {
        cout << i.first << " - " << i.second << endl;
    }


    return 0;
}

