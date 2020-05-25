#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, x;
    cin>> d>>x;
    priority_queue<pair<int, string>>pq;
    pair<int, string>p;

    for(int i=0; i< d; i++) {
        int n;
        cin>> n;
        for(int j=0; j< n; j++) {
            cin>> p.second >> p.first;
            pq.push(p);
        }
        
        for(int j=0; j< x; j++) {
         if(!pq.empty()) {
            cout<<pq.top().second<<endl;
            pq.pop();
         }
        }
    }

}