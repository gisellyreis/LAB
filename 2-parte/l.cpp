#include <bits/stdc++.h>

using namespace std;

struct plan {
    string nome;
    int x;
};

bool cmp(plan a, plan b) {
    return a.nome > b.nome;
}

int main() {
    int n;
    cin>> n;
    plan aux;
    vector<plan>v;
    vector<plan>::iterator it;

    for(int i = 0; i< n; i++) {
        cin>> aux.nome>> aux.x;
        v.push_back(aux);
    }

    stable_sort(v.begin(), v.end(), cmp);

    int p, count = 0;
    cin>> p;
    
    for(int i = 0; i< p; i++) {
        cin>> aux.nome;
        it = lower_bound(v.begin(), v.end(), aux, cmp);
        count +=(*it).x;
    }

    cout<<  count<<endl;
}