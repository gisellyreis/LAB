#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct digito {
    int numero;
    int soma;
};

int handleSoma(int x) {
    string dig = to_string(x);
    int soma = 0;
    for(int i=0, t = dig.size(); i< t; i++) {
        soma+= dig[i] - '0';
    }
    return soma;
}

bool cmp(digito a, digito b) {
    return (a.soma > b.soma || a.soma == b.soma && a.numero < b.numero);
}

int main() {
    int n;
    cin>> n;
    vector<digito>v;
    digito x;

    for(int i=0; i< n; i++) {
        cin>> x.numero;
        x.soma = handleSoma(x.numero);
        v.push_back(x);
    }


   stable_sort(v.begin(), v.end(), cmp);
  
        cout<<v[0].numero;
    for(int i =1, t= v.size(); i< t; i++) {
        cout<<' '<< v[i].numero;
    }
        cout<<endl;

}