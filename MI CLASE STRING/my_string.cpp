#include "my_string.h"

using namespace std;

//CONSTRUCTORES

my_string::my_string (const char * str) 				//Constructor por defecto
{
    length = 0;
    palabra  = new char[0];
}
;
my_string::my_string ( const char * str) 		//Constructor
{
    length = 1;
    palabra  = new char(str);
}

my_string::my_string (const char* c) 	//Toma en un string y crea un objeto (string)
{
    if (c) 
    {
        int n = 0;
        while (c[n] != '\0') 
			n++;
			
        length = n;
        palabra  = new char[n];
        for (int j=0; j < n; j++)
            palabra[j] = c[j];
    } 
	else 
    {
        length = 0;
        palabra   = new char[0];
    }
}



