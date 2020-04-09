#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin>> n;
    string simb;
    cin.ignore();
    stack<char>p;

    for(int i=0; i< n; i++) {
        getline(cin, simb);
        int tam = simb.size();

        for(int j = 0; j< tam; j++) {
            if(simb[j] == '(' || simb[j] == '{' || simb[j] == '[' || simb[j] == '<')
                p.push(simb[j]);
            else if(simb[j] == ')') {
                if(!p.empty() && p.top() == '(')
                    p.pop();
                else 
                    p.push(simb[j]);
            }
            else if(simb[j] == '}') {
                if(!p.empty() && p.top() == '{')
                    p.pop();
                else 
                    p.push(simb[j]);
            }
            else if(simb[j] == ']') {
                if(!p.empty() && p.top() == '[')
                    p.pop();
                else 
                    p.push(simb[j]);
            }
            else if(simb[j] == '>') {
                if(!p.empty() && p.top() == '<')
                    p.pop();
                else 
                    p.push(simb[j]);
            }
        }

        if(p.empty())
            cout<<'Y'<<endl;
        else 
            cout<<'N'<<endl;
    }
}