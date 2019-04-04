#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int libros[10000];

void merge(int *A,int i,int m,int j)
{int a[j-i+1];
  int b=i;
  int d=m+1;
  int c=0;
  while (b<=m && d<=j)
  {
    if(A[b] >= A[d])
    {
      a[c] = A[d];
      d++;c++;
     }
    else if (A[b] < A[d])
    {
      a[c]=A[b];
      b++;c++;
    }
  }
  while (b<=m) a[c++]=A[b++];
  while (d<=j) a[c++]=A[d++];
  for (int in=0;in<j-i+1;in++)
  {
    A[in+i]=a[in];
  }
  
}

void merge_sort(int *A,int i, int j)
{
  if (i==j) return;
  int m=(i+j)/2;
  merge_sort(A,i,m);
  merge_sort(A,m+1,j);
  merge (A,i,m,j);
}
void mergesSort(int *A, int n)
{
  int i=0;
  int j=n-1;
  merge_sort( A, i,  j);
}


int main()
{
    int N, M;
    
    while (cin >> N)
    {
        for (int i = 0; i < N; ++i){
		
            cin >> libros[i];}
      mergesSort(libros,N);
        
        cin >> M;
        
        int i = 0, j = N - 1;
        int lI, lJ;
        while (i < j)
        {
            if (libros[i] + libros[j] < M)
                ++i;
            else if (libros[i] + libros[j] == M)
            {
                lI = i;
                lJ = j;
                ++i; --j;
            }
            else
                --j;
        }
        
        cout << "Peter should buy books whose prices are " << libros[lI] << " and " << libros[lJ]<< ".\n\n";
    }
}
