#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    if (a - b < 0) {
        return b - a;
    }
    return a - b;
}

int main() {
    int n, m, x, count = 0, pos, ini;
    cin>> n>>m;
    vector<int>v;
    vector<int>::iterator it;

    for(int i=0; i< n; i++) {
        cin>> x;
        v.push_back(x);
    }

    ini = 0;
    for(int i=0; i< m; i++) {
        cin>> x;
        if(binary_search(v.begin(), v.end(), x)) {
            it = lower_bound(v.begin(), v.end(), x);
            pos = it - v.begin();

            count+= max(pos, ini);
            ini = pos;
        }
    }

    cout<<count<<endl;
}