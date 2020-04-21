#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, y, x;
    cin >> n;
    set<int>s, ex;

    for(int i =0; i< n; i++) {

        cin>> y;
        for(int j=0; j< y; j++) {
            cin>>x;
            if((ex.count(x) == 0) && (s.count(x) == 0) ) {
                ex.insert(x);
            }
            else {
                ex.erase(x);
                s.insert(x);
            }
        }

    }

    if(ex.size() == 0) {
        cout<< 0 <<endl;
    }
    else {
        for(set<int>::iterator it = ex.begin(); it!=ex.end(); it++) {
            cout<< *it<<endl;
        }
    }
}