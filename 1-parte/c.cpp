#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
    return a > b;
}

int main() {
    string s;
    vector <string>v;

    while(cin>> s) { // entrada termina em EOF
        v.push_back(s);
    }

    stable_sort(v.begin(), v.end(), cmp);

    for(int i = 0; i< v.size(); i++) {
        cout<< v[i]<<endl;
    }
}