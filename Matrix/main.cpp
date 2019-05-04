#include <bits/stdc++.h>
#include "matrix.h"
using namespace std;

int main() {
  matrix<int> a(2,2);
  cout<<a<<endl;
	a<<1<<3<<4<<5<<6;
  cout<<a<<endl;
  matrix<int> b(2,2);
	b<<6<<5<<4<<3<<6;

  cout<<(a+b)<<endl;
  cout<<(a*b)<<endl;
  cout<<a(0,1)<<endl;
  matrix<int> c(a);
  cout<<c<<endl;
    
  return 0;
}
