#include <bits/stdc++.h>

using namespace std;

int main ()
{
  
  int k;
  while(cin>>k){
    multiset<int>fact;

    long long total=0;
    if(k==0){break;}
    for(int i=0;i<k;i++){
      int x;
      cin>>x;
      for(int j=0;j<x;j++){
        int y;
        cin>>y;
        fact.insert(y);

      }

      multiset<int>::iterator bajo=fact.begin();
      multiset<int>::iterator alto=--fact.end();
      total+=*alto-*bajo;
      fact.erase(alto);fact.erase(bajo);

    }
    cout<<total<<endl;
  ;


  }



  return 0;
}
