#include <bits/stdc++.h>
//#include "sort.h"
#include "insertion.h"
#include "selection.h"
#include "bubble.h"

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
	{
		if(TA[i]!=TB[i])
		{
			return false;
		}
	}
	cout<<time<<" ";
	return true;
}

int main()
{
		//int ta=5;
		//  int a[ta]={1,5,3,0,7};
		//  int x;
	srand(time(NULL));
	int N=100000;
	int *A=new int[N];
	TA=new int[N];
	TB=new int[N];
  	sort sort[]={new int bubble,new int dselection,new int insertion,insertion};
  	for(int n=100;n<=N;n*=10)
  	{
  		for(int i=0;i<n;i++)
  		{
  			A[i]=rand()%n;
		}
  		cout<<n<<" ";
  		for(int s=0;s<4;s++)
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

};
