//Diego Grell Casaverde Carpio
//Frans Gallegos Mendoza	
#ifndef MY_STRING_H
#define MY_STRING_H

#include <iostream>

class my_string
{
	
	private: 	
		char* 	string ; 
		unsigned 	 leng; 
		
	public: 
	
		
		my_string(); 								
		my_string ( const char * str = NULL); 
		my_string ( const my_string & str);			
		
	
		~my_string();
		
		
		int length( )const;	
	
	    int indice (char str) const;		
		bool vacio();   				
		
		my_string& operator = (const my_string & str);		
		friend my_string& operator + ( const my_string& l, const my_string& r);		
		friend bool operator == (const my_string& izq, const my_string& der);
		friend bool operator > (const my_string& izq, const my_string& der);	
		friend bool operator < (const my_string& izq, const my_string& der);	
		
		friend std::ostream& operator<< (std::ostream& os, const my_string& str);	 
	    friend std::istream& operator>> (std::istream& os,       my_string& str);	
		
		char  operator[] (int i) const;	
		char & operator[]( int  i);
		
};

#endif

	
	
	
