template <class T>
int Myvector<T>::delta_cap = 10;

template <class T>
Myvector<T>::Myvector(int p_size): m_size(p_size)
{

	max_cap = m_size + delta_cap;
	p_data = new T[max_cap];
}

template <class T>
Myvector<T>::Myvector(const Myvector<T> & v)
{
	m_size = v.m_size;
	max_cap = v.max_cap;
	p_data = new T[max_cap];
	memcpy(p_data, v.p_data, m_size * sizeof(T));
}

template <class T>
Myvector<T>::~Myvector()
{
	delete[]p_data;
}

template <class T>
void Myvector<T>::push_back(const T & e)
{
	if (m_size == max_cap)
		reserve(max_cap + delta_cap);
		p_data[m_size++] = e;
}

template <class T>
void Myvector<T>::reserve(int p_cap)
{
	assert(p_cap > m_size);
	T * old_data = p_data;
	max_cap = p_cap;
	p_data = new T[max_cap];
	for (int i = 0; i < m_size; i++)
		p_data[i] = old_data[i];
}

template <class T>
T & Myvector<T> :: operator[](int i)
{
	return p_data[i];
}

template <class T>
int Myvector<T>::get_size()
{
	return m_size;
}