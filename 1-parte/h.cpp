#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, op;
    string nome;
    cin>> n;

    queue <string>filme;

    for(int i=0; i< n; i++) {
        cin>> op;
        if(op == 1) {
            cin>> nome;
            filme.push(nome);
        }
        else {
            if(!filme.empty()) {
                cout<<filme.front()<<endl;
                filme.pop();
            }
            else {
                cout<<"Lista vazia"<<endl;
            }
        }
    }
}