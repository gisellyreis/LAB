#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int n, k;
    cin>> n>> k;
    double x;
    vector<double>v;
    cout<< fixed << setprecision(2);

    for(int i=0; i< n; i++) {
        cin>> x;
        v.push_back(x);
    }

    if((k*6) > n) {
        cout<< "impossivel"<<endl;
    }
    else {
        stable_sort(v.rbegin(), v.rend());

        for(int i=0; i< k; i++) {
            cout<<"Time "<< i+1<<endl;
            cout<<v[0]<< ' ';
            cout<<v[1]<< ' ';
            cout<<v[2]<< ' ';
            cout<<v[3]<< ' ';
            cout<<v[4]<< ' ';
            cout<<v[5]<<endl;
            cout<<endl;
            v.erase(v.begin(), v.begin()+6);
        }
    }
}