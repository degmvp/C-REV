#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<int>pilha1,pilha2;

   pilha1.push(10);
   pilha1.push(20);
   pilha1.push(30);
   pilha1.push(40);
   pilha1.push(50);
   pilha1.emplace(60);

   cout << "quantidade itens da pilha1 "  << pilha1.size() << endl;
    while(!pilha1.empty()){
        cout << pilha1.top() << endl;
        pilha1.pop();
    }
    if(pilha1.empty()){
        cout << "pilha1 vazia" << endl;
        cout << endl;
    }
    //pilha2.swap(pilha1);

   pilha2.push(100);
   pilha2.push(200);
   pilha2.push(300);
   pilha2.push(400);
   pilha2.push(500);
   pilha2.emplace(600);

   cout << "quantidade itens da pilha2 "  << pilha2.size() << endl;
   while(!pilha2.empty()){
        cout << pilha2.top() << endl;
        pilha2.pop();
    }

    if(pilha2.empty()){
        cout << "pilha2 vazia" << endl;
    }


    return 0;
}
