#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, count = 0;
    cin>> n>>m;
    bool res;
    vector<int>v;

    for(int i=0; i< n; i++) {
        cin>> x;
        v.push_back(x);
    }

    for(int i=0; i< m; i++) {
        cin>>x;

        res = binary_search(v.begin(), v.end(), x);
        if(res) {
            count++;
        }
    }

    cout<<count<<endl;
}