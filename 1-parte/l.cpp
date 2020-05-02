#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin>> n;
    stack<char>p;
    char x;
    int cont=0;

    for(int i=0; i< n; i++) {
        cin>> x;

        if(!p.empty()) {
            if(p.top() == x) {
                cont+=2;
                p.pop();
            }
            else {
                p.push(x);
            }
        }
        else 
            p.push(x);
    }

    cout<<cont<<endl;
}
