
template <class T>
void insertion<T> :: run_sort(T *A, int n)
{
	int cont = 0;
	for (int i = 1; i < n; i++)
	 {
		int y = A[i];
		int j = i - 1;
		while ((j >= 0) && (A[j] > y)) 
		{
			A[j + 1] = A[j];
			j--;
			cont++;
		}
		A[j + 1] = y;
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

