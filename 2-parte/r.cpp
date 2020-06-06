#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    char acao;
    double aux;

    cout<< fixed<<setprecision(2);
    while(cin>> n && n != 0) {
        priority_queue<double>compra;
        priority_queue<double, vector<double>, greater<double>>venda;
        double total = 0;

        for(int i=0; i< n; i++) {
            cin>> acao;

            if(acao == 'C') {
                cin>>aux;
                compra.push(aux);

                if(!venda.empty() && compra.top() >= venda.top()) {
                    total+= compra.top() - venda.top();
                    compra.pop();
                    venda.pop();
                }
            }

            else {
                cin>>aux;
                venda.push(aux);

                if(!compra.empty() && compra.top() >= venda.top()) {
                    total+= compra.top() - venda.top();
                    compra.pop();
                    venda.pop();
                }
            }
        }

        cout<< total<< endl;
        total = 0;

    }
}