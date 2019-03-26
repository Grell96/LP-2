#include <iostream>
#include <string>
using namespace std;


void ejer1(int &a,int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	 cout << b << endl;
 	 cout << a;
}

bool pal (char *str)
{
	int i,j;
	i=j=0;
	while (str[j])j++;
	j--;
	while(i<j)
	{
		if(str[i++] != str[j--])
		{
			return 0;
		}
	}
	return 1;
}

void ordenar(int arr[], int n,int k) 
{ 
   int i, j; 
   for (i = 0; i <k; i++){
       for(j=i+1;j<n;j++){
          if(arr[i]>arr[j]){
            swap(arr[i], arr[j]); 
          }
       }  
     } 
  cout<<arr[k-1]<<endl;
       
} 


int potencia_iterativa(int base, int exponente){
	exponente=exponente-1;
		base  <<=exponente;
	
	return base;
}
int potenciaRecursiva(int n, int e) {
    if(e == 0) {
        return 1;
    }
    else {
        int aux = potenciaRecursiva(n,(e/2));
        if (e % 2 == 0)
            return aux*aux;
        else
            return n*aux*aux;
    }
}
