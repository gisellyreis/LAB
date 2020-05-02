#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    string autor, titulo;
} book;

bool cmp(book a, book b) {
    return (a.autor < b.autor || a.autor == b.autor && a.titulo < b.titulo);
};

int main() {
    int n;
    cin>> n;
    book aux;
    vector<book>v;

    for(int i=0; i< n; i++) {
        cin>>aux.autor;
        cin.ignore();
        getline(cin,aux.titulo);
        v.push_back(aux);
    }

    stable_sort(v.begin(), v.end(), cmp);

    for(int i = 0; i< v.size(); i++) {
        cout<<v[i].titulo<<endl;
    }
}
