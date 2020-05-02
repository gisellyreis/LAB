#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (int a, int b) {
    return a > b;
}

int main() {
    int aux, n;
    vector<int>par, impar;

    cin>> n;
    for(int i=0; i< n; i++) {
        cin>> aux;
        if(aux%2 != 0) {
            impar.push_back(aux);
        }
        else {
            par.push_back(aux);
        }
    }

    stable_sort(impar.begin(), impar.end());
    stable_sort(par.begin(), par.end(), cmp);

    for(int i=0; i< impar.size(); i++) {
        cout<< impar[i]<< " ";
    }
    for(int i=0; i< par.size(); i++) {
        cout<< par[i]<< " ";
    }
}
