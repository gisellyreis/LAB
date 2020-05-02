#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int k, op,x,y;
    cin>> k;
    set<int>s;
    set<int>::iterator itlow, itup;
    
    for(int i=0; i< k; i++) {
       
        cin>> op;
        if(op == 1) {
            cin>> x;
            s.insert(x);
        }
        else {
            cin>>x>>y;

            itlow = s.lower_bound(x);
            itup = s.lower_bound(y);

            if(itlow ==itup) {
                cout<< 0<< endl;
                continue;
            }

            if(itup == s.end() || (*itup) > y) {
                itup--;
            }

            if(itlow ==itup) {
                cout<< 0<< endl;
                continue;
            }
           
            cout<< (*itup) - (*itlow)<<endl;
        }
    }
}
