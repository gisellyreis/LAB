#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct obj {
    string desc;
    int tempo;
};

int main() {
    int n, c, t;
    cin>> n;
    queue<obj>q;
    obj aux;
    string desc;
    

    for(int i=0; i< n; i++) {
        cin>> c;
        if(c == 0) {
            cin.ignore();
            getline(cin, desc);
            cin>> aux.tempo;
            aux.desc = desc;
            q.push(aux);
        }
        else {
            cin>> t;
            if(q.empty()) {
                cout<< "Nao existem bugs cadastrados"<<endl;
            }
            else {
                    aux = q.front();
                    q.pop();
                    if((aux.tempo - t) > 0) {
                        aux.tempo = aux.tempo - t;
                        q.push(aux);
                    }
            }
              
        }
    }

    if(q.empty()) 
        cout<< "Fila vazia"<<endl;
    else {
        while(!q.empty()) {
            aux = q.front();
            q.pop();
            cout<< aux.desc<< " " << aux.tempo<<endl;
        }
    }
}