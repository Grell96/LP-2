#include <iostream>
using namespace std;
 


bool recursive_bina(int x, int* array ,int n, int l, int r)
{
  
  int m=(l+r)/2;
  
  if (array[m]==x){
    

    return true;
  }
  else if (array[m]<x)
  {
    recursive_bina(x,array,n, l=m+1, r);
    
  }

  else if (array[m]>x)
  {
    recursive_bina(x,array,n, l, r=m-1);
    
  }
  return false;
}

bool binary_search (int x, int* array ,int n)
{
  int m;
  int i=0;
  int j=n-1;
  while (i<=j)
  {
    
    m=(i+j)/2;
   

    if(array[m]==x)
    {
      
      return true;
    }
    else if(array[m]>x)
    {
       
      j=m-1;
    }
    else if (array[m]<x) {
        i=m+1;
       
    }
  }
  return false;
}

bool lineal(int x, int* array, int n)
{
  for (int i=0; i<n-1; i++)
  {
    if (array[i]==x)
    {
      return true;
    }
  }
    return false;
}
