#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, c,x, j=0;
    cin>> n>> c;
    map<int, int>m;
    map<int, int>::iterator it;

    for(int i=0; i< c; i++) {
        cin>> x;

        if(j>=n) {
            j = 0;
        }
        m[x] = j;
        j++;
    }

    int i =0;

    while(i<n) {
        for(it = m.begin(); it!=m.end(); it++) {
            if((*it).second == i) {
                cout<<(*it).first<<" ";
            }
        }
        cout<<endl;
        i++;
    }

}