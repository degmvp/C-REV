#include <iostream>
#include <list>

using namespace std;
bool par(const int& value){
    return((value%2)==0);
}

bool impar(const int& value){
    return((value%2)==1);
}


int main()
{
    list<int>lst1;
    list<int>lst2(10,0);
    list<int>lst3(lst2);
    list<int>lst4={1,2,3};

    for(auto it=lst4.begin();it!=lst4.end(); it++){
        cout << *it << " lista usando auto iterator " << endl;
    }
        cout << "  lst4 usa as funcoes begin() - end()" << endl;

    if(lst1.empty()){
        cout << "  Lista vazia "  << endl;
    }
    lst1.assign(lst4.begin(),lst4.end());
    for(auto x:lst1){
        cout << x << " lst4.begin(),lst4.end()" << endl;
    }
    lst1.push_back(99);
    lst1.push_front(88);
    for(auto x:lst1){
        cout << x << " push_back(99),push_front(88)" << endl;
    }
    lst1.pop_back();
    lst1.pop_front();
    for(auto x:lst1){
        cout << x << " pop_back(),pop_front()" << endl;
    }
    list<int>::iterator it;
    it=lst1.begin();
    lst1.insert(it,1945);

        for(auto x:lst1){
        cout << x << " iterator + insert)" << endl;
    }
    --it;
    lst1.erase(it);

        for(auto x:lst1){
        cout << x << " iterator + erase)" << endl;
    }
    list<int>lst5={1,2,3,4};
    list<int>lst6={6,7,8,9};
    lst5.swap(lst6);
    lst6.resize(3);  //lst6.clear();

    for(auto x:lst5){
        cout << x  << " swap lst5 com lst6"  << endl;
    }
    for(auto x:lst6){
        cout << x  << " swap lst6 com lst5" << endl;
    }
    lst6.emplace(lst6.begin(),1983);

    for(auto x:lst6){
        cout << x  << " lst6.emplace(lst6.begin(),1983)" << endl;
    }
        cout <<  "  lst6.emplace_front() - emplace_back" << endl;

    list<int>lst7={0,1,0,2,0,3,0,4,0,5};
    lst7.remove(0);
    lst7.remove_if(par);
   // lst7.remove_if(impar);
    for(auto x:lst7){
        cout << x  << " lst7.remove(0) - lst7.remove_if(par)" << endl;
    }
        cout <<  "  lst7.sort() - lst7.unique() - emplace_back" << endl;
        cout <<  "  lst7.merge(lst6) - lst7.reverse() - emplace_back" << endl;
    return 0;
}
