#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double count = 0;
    map<string, int>m;
    double p;
    cout<<fixed<<setprecision(2);
    while(cin>>nome && nome != "FIM") {
        m[nome] += 1;
        count++;
    }

    for(map<string, int>::iterator it = m.begin(); it!= m.end(); it++) {
        p = ((*it).second * 100.00) / count;
        cout<<(*it).first<< " "<< p <<endl;
    }
}