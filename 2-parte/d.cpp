#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin>> n;
    string nome;
    map<string, int>m;
    map<string, int>::iterator it;

    for(int i=0; i< n; i++) {
        cin>> nome;
        m[nome] += 1;
    }

    int maior = -1;

    for(it = m.begin(); it!=m.end(); it++) {
        if((*it).second > maior) {
            maior = (*it).second;
            nome = (*it).first;
        }
    }
    cout<<nome<< " "<< maior<<endl;
    m.erase(nome);

    for(it = m.begin(); it!=m.end(); it++) {
        cout<<(*it).first<< " "<< (*it).second<<endl;
    }    
}