#include <bits/stdc++.h>
using namespace std;


struct A
{
int x;
string str;
/*
A(int a, string s){
	x=a;
	str=s;
}
*/
};

ostream& operator << (ostream &o,const A &p)
{
    o <<  p.x << " , " << p.str <<endl;
    return o;
}

istream& operator >> (istream &i, A &p)
{
    i >> p.x >> p.str;
    i.ignore();
    return i;
}


void savearray(vector <A>&VA,char s [] ){
	ofstream fichero(s,ios::binary);
	for(int i=0;i<VA.size();i++){
		fichero.write((char*)&VA[i],sizeof(A));
	
	}
	
	fichero.close();
	
	
}

void loadarray(vector <A> &VA,char s [], int tam){
	ifstream fichero(s,ios::binary);
	VA.resize(tam);
	for(int i=0;i<tam;i++)
	{
		fichero.read((char*)&VA[i],sizeof(A));
	
	}
	fichero.close();
}

/*
void loadarray(vector <A> &VA,char s []){
	A a;
	ifstream fichero(s,ios::binary);

	while(!fichero.eof()){
		fichero.read((char*)&a,sizeof(A));
		VA.push_back(a);
	}
	fichero.close();
	
}
*/

int main()
{
A a;
vector <A> VA;
vector <A> VB;
int u=0;
while ( u==0)
{
	if(u!=0){
		break;
	}
	cin>>a;
	VA.push_back(a);
	cout<<a<<endl;
	cin>>u;
	
	
}
	savearray (VA,"doc.bin");
	loadarray(VB,"doc.bin",VA.size());
	
	for(int j=0;j<VB.size();j++){
	
		cout<<VB[j]<<endl;
	
		
	}
	//cout<<"C"<<endl;
	return 0;
}

 

