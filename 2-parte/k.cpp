#include <bits/stdc++.h>

using namespace std;

struct bolsa{
  string nome;
  int x;
};
bool cmp(bolsa a, bolsa b){
  return a.nome > b.nome;
}

int main(){
  int n, count=0;
  cin>> n;
  bolsa aux;
  vector <bolsa>v;
  vector <bolsa>::iterator it;

  for(int i=0; i< n; i++){
    cin>>aux.nome>> aux.x;
    v.push_back(aux);
  }
  stable_sort(v.begin(), v.end(), cmp);
  int m;
  cin>> m;

  for(int i=0; i< m; i++){
    cin>>aux.nome>> aux.x;
    
      it = lower_bound(v.begin(), v.end(), aux, cmp);
      count+= aux.x*(*it).x;
    //cout<< (*it).x<<endl;
  } 
  cout<< count<<endl;
}
