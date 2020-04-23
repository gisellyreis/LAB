#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, x, y;
    cin>> n>> m;
    set<int>s;

    for(int i=0; i< n; i++) {
        cin>>x;
        s.insert(x);
    }
    for(int i=0; i< m; i++) {
        cin>> y>>x;
        if(s.find(y) != s.end()) {
            s.insert(x);
        }
    }

    cout<< s.size()<<endl;
}