#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int test;
	cin >> test;

	while(test--)
	{
		int bolsas;
		int tama = 0;
		int max_paque = 0;
		int repetidos = 0;
		map<int, int> snow;

		cin >> bolsas;

		for(int i = 1; i <= bolsas; ++i)
		{
			int n;
			cin >> n;
			int seen = snow[n];
			
			if(seen)
			{
				repetidos = max(repetidos, seen);
				tama = i - repetidos -1 ;
			}

			++tama;
			snow[n] = i;
			max_paque = max(max_paque, tama);
		}


		cout << max_paque << "\n";
	}

	return 0;
}
