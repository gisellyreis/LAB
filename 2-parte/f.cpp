#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, p, l;
    cin>> t;

    for(int i=0; i< t; i++) {
        cin>> p>> l;
        map<string, string>m;
        map<string, string>::iterator it;
        vector<string>tokens;
        string tatooines, port;

        for(int j=0; j< p; j++) {
            cin>>tatooines;
            cin.ignore();
            getline(cin, port);
            m[tatooines] = port;
        }
        for(int j=0; j< l; j++) {
            getline(cin, tatooines);
            string pch;

            stringstream check(tatooines);
            while(getline(check, pch, ' ')) {
                it = m.find(pch);
                if(it!=m.end()) {
                    pch = (*it).second;
                }
                tokens.push_back(pch);
            }

            for(int k=0; k< tokens.size(); k++) {
                cout<< tokens[k]<< " ";
            }
            cout<<endl;
            tokens.clear();
        }
    }
    cout<<endl;
}