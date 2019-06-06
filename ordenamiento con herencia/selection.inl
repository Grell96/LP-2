

template <class T>;
insertion<T> :: run_sort(T *A, int n)
{
	int min,aux;
	for(int i=0;i<n;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{	
				min=j;
			}
		}
		aux=a[min];
		a[min]=a[i];
		a[i]=aux;
	}
}
	
template <class T>
insertion<T> :: ~insertion()
{
	for(int i=0; i<n; i++)
	{
		delete A[i];
	}
}
