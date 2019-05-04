#pragma once

#include <cassert>
#include <cstring>

using namespace std;
template <class T>

class Myvector
{
private:
	T * p_data;
	int m_size;
	int max_cap;
	static int delta_cap;
public:
	
	Myvector(int p_size=0);
	Myvector(const Myvector & v);
	virtual ~Myvector();
	void push_back(const T & e);
	void reserve(int p_cap);
	//void resize(int p_size);
	T & operator[] (int i);
	int get_size();
};

#include "Myvector.inl"
