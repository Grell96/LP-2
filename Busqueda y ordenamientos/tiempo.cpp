#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

int *TA;
int *TB;

typedef long long my_int;
typedef void(*fun_sort)(int *,int);
bool test_sort(fun_sort sort,const int *A,int n)
{
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	clock_t t=clock();
	sort(TA,n);
	float time=float(clock()-t)/CLOCKS_PER_SEC;
	
	std::sort(TB,TB+n);
	for(int i=0;i<n;i++)
	{	if(TA[i]!=TB[i])
		{	return false;
		}
	}
	cout<<time<<" ";
	return true;
}

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
void o_bubble(int *a,int n)
{	int aux;
	for(int i=0;i<(n-1);i++)
	{	for(int j=0;j<n-1;j++)
		{if(a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	
	}

}

int main()
{ 
	srand(time(NULL));
	int N=100000;
	int *A=new int[N];
	TA=new int[N];
	TB=new int[N];
  	fun_sort sort[3]={o_bubble,o_insert,o_selec};
  	for(int n=100;n<=N;n*=10)
  	{	for(int i=0;i<n;i++)
  		{
  			A[i]=rand()%n;
		}
  		cout<<n<<" ";
  		for(int s=0;s<3;s++)
  		{
  			if(!test_sort(sort[s],A,n))
  			{
  				cout<<"FAIL\n";
  				return 0;
		    }
		}
		cout<<endl;
	
	}
	delete []A;
	delete []TA;
	delete []TB;

  
	return 0;
}


