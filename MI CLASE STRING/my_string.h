//GRELL CASAVERDE CARPIO
//JHONNY FRANS GALLEGOS MENDOZA
#ifndef MY_STRING_H
#define MY_STRING_H

#include <iostream>

class my_string
{
	private:
		
	    char*    palabra;
	    unsigned length;  // (largo)El numero de letras en una palabra
	
	public:
		
		my_string (const char * str = NULL);
		my_string (const my_string & str );
		~ my_string();
		my_string & operator = (const my_string & str);
		my_string & operator + (const my_string & str);
		friend bool operator == (const my_string & izq, const my_string & der);	//Igualdad de ambos string
		friend bool operator < (const my_string & izq, const my_string & der);
		friend bool operator > (const my_string & izq, const my_string & der);
		char & operator [](const int & i);
		friend std::ostream & operator << (std::ostream & os, const my_string & str);
		friend std::istream& operator>> (std::istream& os, 		 my_string & str);	//cin >> String
		
	};
	
	#endif
