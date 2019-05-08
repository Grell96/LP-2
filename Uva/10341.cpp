#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() 
{
  int p,q,r,s,t,u;
  double inf,sup,m,f;

  while (cin>> p)
  {
    cin>>q>>r>>s>>t>>u;
    if(p*exp(-1)+q*sin(1)+r*cos(1)+s*tan(1)+t+u>1e-9 || p+r+u<0)
    {
      cout<<"no tiene solucion";
    }
    else
    { 
      sup=1.0;inf=0.0;
      for (int i=0;i<30;i++)
      {
      m=(inf+sup)/2;
      f=p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;
      if(f>0) inf=m;
       else sup=m;

       }
    cout<<inf;
    }
    return 0;
  }     
}
