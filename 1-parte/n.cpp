#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x;
    cin>> n;
    set<int>s;

    for(int i=0; i< n; i++) {
        cin>> x;
        s.insert(x);
    }

    int tam = s.size();
    cout<<tam<<endl;
}
