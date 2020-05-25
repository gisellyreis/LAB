#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<string, int>a, pair<string, int>b ) {
    return (a.second > b.second ||
    a.second == b.second && a.first > b.first);
}

int main() {
    int n;
    cin>> n;
    priority_queue<pair<string, int>, vector<pair<string, int>>, 
    bool(*)(pair<string, int>, pair<string, int>)>pq(cmp);

    pair<string, int>p;

    for(int i=0; i< n; i++) {
        cin>>p.first>>p.second;
        pq.push(p);
    }

    int m, x;
    cin>> m;

    for(int i=0; i< m; i++) {
        cin>> x;
        p = pq.top();
        pq.pop();
        p.second += x;
        pq.push(p);
    }

    while(!pq.empty()) {
        cout<<pq.top().first<< " " << pq.top().second<<endl;
        pq.pop();
    }
}