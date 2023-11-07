#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << " vct.push_back() - vct.pop_back()"  << endl;
    vector<int>vct={9,1,2,3,4,8,7,6,5,0};
    if(vct.empty()) {
        cout << "vetor vazio" << endl;
    }

    for(auto it=vct.rbegin();it!=vct.rend(); it++){
        cout << *it << " vct.rbegin rend " << endl;
    }
    cout << vct.size() << " vct.size() "<< endl;
    cout << vct.max_size() << " vct.max_size "<< endl;

    for(auto x:vct)
{
    cout << x << " auto x:vct " << endl;
}
    vct.resize(20);
    vct.shrink_to_fit();

    cout << vct.capacity() << " vct.resize() - shrink_to_fit() " << endl;
    cout << vct[3] << " vct.[]" << endl;
    cout << vct.at(3) << " vct.at() "<< endl;
    cout << vct.front() << " vct.front() " << endl;
    cout << vct.back()  << " vct.back() "  << endl;

    vector<int>vct2;

    vct2.assign(10,0);
    for(auto x:vct2){
        cout << x  << " itens vct2 assgn(10,0) " << endl;
    }

        return 0;
}
