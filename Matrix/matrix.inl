template <class T>

matrix<T> :: matrix(size_t nr, size_t nc)
{
    n_rows = nr;
    n_columns = nc;
    M = new T *[nr];
    for(int i=0; i<nr; i++){
        M[i] = new T [nc];
    }
    for(int i=0;i<this->n_rows;i++){
      for(int j=0;j<this->n_columns;j++){
          M[i][j]=0;
      }
    }

}
template <class T>
matrix<T> :: ~matrix()
{
    for(int i=0; i<n_rows; i++){
        delete [] M[i];
    }
    delete [] M;
}
template <class T>
matrix<T> :: matrix(const matrix<T> & dat)
{
  n_columns=dat.n_columns;
  n_rows=dat.n_rows;
  M = new T *[dat.n_rows];
    for(int i=0; i<dat.n_rows; i++){
        M[i] = new T [dat.n_columns];
    }
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            M[i][j] = dat.M[i][j];
        }
    }
    
    
}

template <class T>
T & matrix<T>:: operator () (size_t i, size_t j)
{
  //if(i==0||j==0){cout<<"las posiciones comienzan en 1"<<endl;}
    return M[i][j];
}

template <class T>
matrix<T> matrix<T> :: operator + (const matrix<T> & dat)
{
  
    matrix<T> aux(dat.n_rows,dat.n_columns);
  if(dat.n_rows!=this->n_rows && dat.n_columns!=this->n_columns){
    cout<<"NO se puede sumar"<<endl;
    return aux;
  }

  else{


    
    for(int i=0; i<n_columns; i++){
        for(int j=0; j<n_rows; j++){
            aux.M[i][j] = this->M[i][j] + dat.M[i][j];
        }
    }
    return aux;
  }
}
template <class T>
matrix<T> matrix<T> :: operator * (const matrix<T> & dat)
{
   if(dat.n_columns!=this->n_rows && dat.n_rows!=this->n_columns){
    cout<<"NO se puede multiplicar"<<endl;
  }
    matrix<T> aux(dat.n_rows,dat.n_columns);
   
    T suma = 0;
    for(int i=0; i<n_columns;i++){
        for(int j=0; j<n_rows; j++){
            for(int l=0; l<n_columns;l++){
                suma = suma + (M[i][l] * dat.M[l][j]);
            }
            aux.M[i][j] = suma;
            suma = 0;
        }
    }
    return aux;
}

template <class T>
matrix<T>& matrix<T>::operator << (const T v)
{

  if(0==this->c && this->n_rows==this->r ){
    cout<<"La matriz esta llena"<<endl;
    return *this;
  }
  else{

    M[r][c] = v;
    
    this->c++;
    if(this->c==this->n_columns){
      this->r++;
      this->c=0;
    }
  
    
  }
  return *this;
}

template <class T>
ostream& operator <<(ostream & os,const matrix<T>& dat)
{
    for(int i=0; i<dat.n_rows; i++){
        for(int j=0;j<dat.n_columns;j++){
            os<<dat.M[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}


