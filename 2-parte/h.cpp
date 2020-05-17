#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q, nota, c;
    cin>> n>> q;
    vector<int>v;
    vector<int>pass;

    for(int i =0; i< n; i++) {
        cin>> nota;
        v.push_back(nota);
    }

    
    int x = v.size();
    for(int i=0; i< q; i++) {
        nota = v[x-1];
        pass.push_back(nota);
        x--;
    }
    stable_sort(pass.begin(), pass.end());
   
    cin>> c;
    for(int i=0; i< c; i++) {
        cin>>x;

        if(bool res = binary_search(pass.begin(), pass.end(), x)) {
            cout<< "Sim" <<endl;
        }
        else {
            cout<< "Nao" <<endl;
        }
    }
}