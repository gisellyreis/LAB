#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, aux, soma = 0;
    cin>> n>> m;
    vector<int>v(n);

    for(int i = 1; i <= n; i++) {
        cin>> v[i];
    }
    for(int i = 0; i < m; i++) {
        cin>>aux;
        soma+= v[aux];
    }
    

    if(soma%3 == 0) {
        cout<< "jogador"<<endl;
    }
    else {
       cout<< "povoa"<<endl; 
    }

} 