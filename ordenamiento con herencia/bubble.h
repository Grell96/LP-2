#pragma once
#include "sort.h"

template <class T>
class bubble : public sort<T> 
{T *A;
int n;
	public:
		void run_sort(T *A, int n);
		~bubble();
};
