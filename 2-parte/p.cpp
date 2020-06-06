#include<bits/stdc++.h>

using namespace std;

int menor(int a, int b) {
    return (a <= b ? a : b);
}

int main() {
    int n, g, s,x;
    cin>> n;
    priority_queue<int>grif;
    priority_queue<int, vector<int>, greater<int>>sonse; 
    
    for(int i=0; i< n; i++) {
        cin>> g>>s;
        for(int j=0; j< g; j++) {
            cin>> x;
            grif.push(x);
        }
        for(int j=0; j< s; j++) {
            cin>> x;
            sonse.push(x);
        }
        int  m, y;
        cin>> m;
        x = menor(grif.size(), sonse.size());

      //  if(x >= m) {
            y = menor(x, m);
           for(int k=0; k<y; k++) {
                cout<<grif.top()<< ' '<< sonse.top()<<endl;
                grif.pop();
                sonse.pop();
            }
      //  }
    }
}