#include <bits/stdc++.h>

using namespace std;

struct livro {
    int cod;
    char ses;
};

bool cmp(livro a, livro b) {
    return a.cod < b.cod;
}

int main() {
    int l;
    cin>> l;
    livro aux;
    vector<livro>v;
    vector<livro>::iterator it;

    for(int i=0; i< l; i++) {
        cin>> aux.cod>> aux.ses;
        v.push_back(aux);
    }

    stable_sort(v.begin(), v.end(), cmp);

    cin>> l;
    for(int i=0; i< l; i++) {
        cin>> aux.cod;
        if( binary_search(v.begin(), v.end(), aux, cmp)) {
            it = lower_bound(v.begin(), v.end(), aux, cmp);
            cout<< (*it).ses<<endl;
        }
        else {
            cout<< "Ausente"<<endl;
        }
    }
}