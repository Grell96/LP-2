//Diego Grell Casaverde Carpio
//Frans Gallegos Mendoza
#include "String.h"



	my_string::my_string()			
	{
		leng = 0; 
		string = new char[0];
				
	} 	
								

	
	my_string::my_string( const char * str ) 
	{
		if(str)
		{int  i = 0; 
			while( str[i] != '\0'){
				i++;
			}
			
			leng = i;
			string = new char [i];
			
			for(int j = 0; j<i ; j++)
				string[j] = str[j]; 
		}
		else {
			leng = 0; 
			string = new char[0];
		}			
		
	}
		
	
	my_string::my_string( const my_string & str)
	{
		leng = str.length();
   		string   = new char[leng];
   		
    	for (int i=0; i < leng; i++)
       		 string[i] = str[i];
			
	}
	
	
	my_string::~my_string ( ) 
	{
    	delete[] string;
	}	
	
	
	
	int my_string::length( )const 		
	{
	    return leng;	}
	
	int my_string::indice (char str) const		
	{
		for (int i=0; i<leng; i++)
	        if (string[i] == str) 
				return i;
	    	else
	    		return -1;	
		
	}
	
	bool my_string::vacio()
	{
		if(string[0] == '\0' && leng <= 1){
			return true;
		}
		else {
			return false;
		}
	}
	

	my_string& my_string::operator = (const my_string & str)		
	{
		 if(this == &str) 
			return *this;

  	 	 delete string;
    
  	 	 leng= str.length();
  	 	 
   		 string = new char[leng];
    
	    for (int i=0; i < leng; i++)
	        string[i] = str[i];
	    return *this;
		
	}

	my_string& operator + ( const my_string & l , const my_string& r)	{
				int size = (l.leng -1) + (r.leng -1) +1;
				
				char * aux = new char[size];
				
				for(int i = 0; i < (l.leng -1);i++)
				{
					aux[i] = l.string[i];
				}
				
				int j = 0;
				
				for(int k = l.leng - 1 , j=0; k < (size-1) ; k++, j++)
				{
					aux[k] = r.string[j];
				}
				
				if(aux[size ] != '\0'){
					aux[size ] = '\0';
				}
				
				;
				
				delete[] aux;
			
		  
	}	
	
	bool operator == (const my_string& izq, const my_string& der)	
	{
		if(izq.length() != der.length())
			return false;
			
		int l_izq = izq.length();
		int n = 0;
		
		while((n < l_izq) && (izq[n] == der[n]))
			n++;
		return (n == l_izq);
		return true;
		
	}
	
	bool operator > (const my_string& izq, const my_string& der)	
	{	
		int ch = 0;
		if(izq.length() < der.length() ) 
		{
			int ch = izq.length();
		}
		else 
		{
			int ch = der.length();
		}
		
	    int n = 0;
	    
	    while ((n < ch) && (izq[n] == der[n])) 
			n++;
			
	    if (n == ch) 
			return (izq.length() > der.length());
	
	    if ( (('A'<=izq[n]&&izq[n]<='Z') || ('a'<=izq[n]&&izq[n]<='z')) &&
	         (('A'<=der[n]&&der[n]<='Z') || ('a'<=der[n]&&der[n]<='z')) )
	    {
	        char A = (izq[n] & ~32);
	        char B = (der[n] & ~32);
	        if (A != B) return (A > B);
	    }
	    
	    return izq[n] > der[n];
		
	}
	
	bool operator < (const my_string& izq, const my_string& der)	
	{
		   return !(izq == der) && !(izq > der);
	}
	

	
	 std::ostream& operator<< (std::ostream& os, const my_string& str)
	{
	
		os << str.string;
	    return os;
	}
	
	 std::istream& operator>> (std::istream& is,       my_string& str)
	{
		char* c = new char[1000];
	    is >> c;
	    
	    str = my_string(c);
	    
	    delete[] c;
	    
	    return is;
	}
	
	char my_string::operator[] (int i) const				
	{
	    if (i >= leng) 
			throw 1;
	    return string[i];
	}
	
	
	char& my_string::operator[] ( int i) 		
	{
	    if (i >= leng) 
			throw 1;
	    return string[i];
	}
	



