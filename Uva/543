#include <bits/stdc++.h>
 
using namespace std;
 int p[1000000];int b[1000000];
 
int main()
{long long z;




b[0]=b[1]=1;
long long q=0;
for( long long i=3;i<1000000;i++){
	b[i]=0;
	}
for(long long i=0;i<1000000;i++){
	p[i]=0;
	}
for(long long i=3;i<1000000;i=i+2){
	if(b[i]!=1){
		p[q]=i;
		q++;
		for(long long  j=i*i;j<1000000;j=j+i+i){
			b[j]=1;
		}
	}

}



while(1){

cin>>z;
if (z<=0)return 0;

long long n=z;
z--;	
long long i=0;
while(i<=z){
	

	if (n<(p[i]+p[z])){
			z--;
		}
	else if(n==(p[i]+p[z])){
	cout<<n<<" = "<<p[i]<<" + "<<p[z]<<endl;
	break;
	}
	else {
		i++;}
	
	

}
if (i>z)cout<<"Goldbach's conjecture is wrong."<<endl;}}
