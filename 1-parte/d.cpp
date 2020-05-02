#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct gamer {
    string nome;
    int ponto;
};

bool cmp(gamer a, gamer b) {
    return (a.ponto > b.ponto || (a.ponto == b.ponto && a.nome < b.nome));
}

int main() {
    int n;
    cin>> n;
    gamer x;
    vector <gamer>v;
    
    for(int i=0; i< n; i++) {
        cin>>x.nome>> x.ponto;
        v.push_back(x);
    }
    stable_sort(v.begin(), v.end(), cmp);

    for(int i = 0; i< v.size(); i++) {
        cout<<v[i].nome<<endl;
    }
}
