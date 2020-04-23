#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, m, ponto=0;
    cin>> n>> m;
    string s;
    stack<string>p;

    for(int i= 0; i< n; i++) {
        cin>> s;
        if(!p.empty()) {
            if(p.top()[0] != s[0] && p.top()[1] != s[1] && p.top()[2]  != s[2]) {
                p.pop();
                ponto+=10;
            }
            else 
                p.push(s);
        }
        else 
            p.push(s);
        if(p.size() == m) {
            cout<<"game over"<<endl;
            return 0;
        }
    }
    cout<<ponto<<endl;
}