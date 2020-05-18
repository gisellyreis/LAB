#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, count = 0;
    cin>> n;
    long long int x;
    vector<long long int>v;

    for(int i=0; i< n; i++) {
        cin>> x;
        v.push_back(x);
    }
    cin>> q;
    for(int i=0; i< q; i++) {
        cin>> x;
        if(binary_search(v.begin(), v.end(), x)) {
            count++;
        }
    }

    if(count == q) {
        cout<< "Sim"<<endl;
    }
    else {
        cout<< "Não"<<endl;
    }
}