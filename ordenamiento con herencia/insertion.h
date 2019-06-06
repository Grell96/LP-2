
#pragma once
#include "sort.h"

template <class T>
class insertion : public sort<T> 
{	T *A;
int n;
	public:
	
		void run_sort(T *A, int n);
		~insertion();
};

#include "insertion.inl"
