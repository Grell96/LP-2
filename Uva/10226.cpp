#include <bits/stdc++.h>

using namespace std;
int main() {
	int t=0;
	cin>>t;
	getchar();
	getchar();

	while(t>0) {
		
		map<string, int> record;
		string tree;
		int n = 0;
		while(getline(cin, tree)) {
			if(tree.compare("") == 0)break;
			record[tree]++;
			n++;
		}
		for(map<string, int>::iterator i = record.begin(); i != record.end(); i++)
			cout<< i->first << " " << fixed << setprecision(4) << i->second*100.0/n << endl;
	
			
	t--;
	if(t>0)cout<< endl;

			
	}
    return 0;
}
