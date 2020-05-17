#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin>> n;
    map<string, int>m;
    map<string, int>::iterator it;
    string gem;
    int x;

    for(int i=0; i< n; i++) {
        cin>> gem>> x;
        m[gem] += x;
    }

    for(it = m.begin(); it!=m.end(); it++) {
        cout<<(*it).first<< " "<< (*it).second<<endl;
    }
} 