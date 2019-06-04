#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n1,n2,a,i,c;
    while(cin>>n1>>n2)
    {
    
        if(n1==0&&n2==0) break;
        c=0;
        map<int,int>disk;
        for(i=0;i<n2+n1;i++)
        {
            cin>>a;
            disk[a]++;
            if(disk[a]==2){
            c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
