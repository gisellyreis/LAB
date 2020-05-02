#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, m,x;
    cin>> n>> m;
    queue<int>q;

    for(int i=0; i< n; i++) {
        cin>> x;
        q.push(x);
    }

    for(int i=0; i< m; i++) {

        if(!q.empty()) {
            if(q.front() > 1) {
                x = q.front() -1;
                q.push(x);
            }
            q.pop();
        }
    }

    if(q.empty()) 
        cout<<"pronto"<<endl;
    else {
        cout<<q.size()<<endl;
        while(!q.empty()) {
            cout<<q.front()<< " ";
            q.pop();
        }
    }

}
