 #include <iostream>
using namespace std;
template <class T>
class Matrix 

{

  private:
     T **p_data;
      size_t n_rows;
	  size_t n_cols;  
  public:
      Matrix(size_t nr=0,size_t nc=0);  
	Matrix(T n_rows,T n_cols )
      ~Matrix();  

   

      T&operator()(size_t i,size_t j);
      Matrix& operator+=(const Matrix<T>&m);
	 Matrix& operator*=(const Matrix<T>&)m;
       

   



   

      Matrix<T> operator + (const Matrix<T> &m1, Matrix<T> & m2);   

      Matrix<T> operator * (const Matrix<T> &m1,const Matrix<T> &m2); 

 
      Matrix<T> operator<<(T &v); 
friend ostream& operator << (ostream &os,const Matrix<T> &n); 
};


#endif

 
