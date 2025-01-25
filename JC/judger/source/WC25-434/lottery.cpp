#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, jsq = n - m;
	cin >> m >> n;
	int x[n - m];
	for (int i = m; i <= n; i++)
	{
		x[i] = i;
	}
	for  (int i = m; i <= n; i++){
			for (int j= 2; j <= n  -1; j++)
			if (x[m] % j == 0) 
			{
				jsq--;
				m++;	
			}
		}
	cout << jsq;
	return 0;
}

