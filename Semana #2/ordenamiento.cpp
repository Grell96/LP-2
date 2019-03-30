#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;
void o_insert(int *a,int n)
{
   int i,j,v;
   for (i = 1; i < n; i++)
   {
        v = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j--;
        }
             
        a[j + 1] = v;
    }   

}
void o_selec(int *a,int n)
{
	int min,aux;
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{	min=j;
			}
		}
		aux=a[min];
		a[min]=a[i];
		a[i]=aux;
	}

}
