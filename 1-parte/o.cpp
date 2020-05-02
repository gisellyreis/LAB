#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int f;
    while (cin>> f && f!= 0){
        string runa;
        set<string>s;

        for(int i=0; i< f; i++) {
            cin>> runa;
            stable_sort(runa.begin(), runa.end());
            s.insert(runa);
        }

        int t = s.size();
        cout<< t<<endl;
        /*
        set<string>::iterator it;
        for(int i=0, t = s.size(); i< t; i++) {
            it = s.begin();
            cout<<*it<<endl;
            s.erase(it);
        }
        */
    }   
}