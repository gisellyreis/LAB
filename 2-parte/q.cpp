#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int>a, pair<string, int>b) {
    return (a.second > b.second || (a.second == b.second && a.first > b.first));
}

int main() {
    int n;
    cin>> n;
    pair<string, int>aux;
    priority_queue<pair<string, int>, vector<pair<string, int>>, bool(*)(pair<string, int>,pair<string, int>)>bolsa(cmp);

    for(int i=0; i< n; i++) {
        cin>>aux.first>> aux.second;
        bolsa.push(aux);
    }

    int m, x;
    cin>> m;
    for(int i=0; i< m; i++) {
        cin>>x;
        aux = bolsa.top();
        bolsa.pop();
        aux.second+=x;
        bolsa.push(aux);
    }

    while (!bolsa.empty()) {
        aux = bolsa.top();
        cout<< aux.first<< " "<< aux.second<< endl;
        bolsa.pop();
    }
    
}