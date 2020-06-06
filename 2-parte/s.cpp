#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, x, maior= -1;
    cin>> t;

    for(int i=0; i< t; i++) {
        int n, k;
        cin>> n>> k;
        vector<int>v;

        for(int j=0; j< n; j++) {
            cin>>x;
            v.push_back(x);
        }

        for(int j=0; j<n-k+1; j++) {
            for(int a = j; a < k+j; a++) {
                if(v[a] > maior) {
                    maior = v[a];
                }
            }
            cout<< maior<< ' ';
            maior = -1;
        }
        cout<<endl;
    }
}