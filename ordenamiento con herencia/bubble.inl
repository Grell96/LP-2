#include <bits/stdc ++.h>

template <class T>
bubble<T> :: run_sort(T *A, int n)
{
	int temp;
	int j;
	for (int i=1; i<n; i++)
	{
          for ( j=0 ; j<n - 1; j++)
		  {
               if (A[j] > A[j+1])
			   {
			        temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
				}
			}
	}
}
	
template <class T>
bubble<T> :: ~bubble()
{
	for(int i=0; i<n; i++)
	{
		delete A[i];
	}
}
