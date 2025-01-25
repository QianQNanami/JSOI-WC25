#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k,jsq  = 0, d1, d2, qw;//总人数 相差人数 
	int h;
	cin >> n >> k;
	if (n  - k == 0 || n == 0) cout << "0";
	else{
		h = n;
		while ((n  -k) % 2 == 0 && n != 0)
		{
			d1  =  (n - k) / 2+ k;
			n = d1;
		}
		if ((n - k) % 2 != 0)
			{
				jsq += n;
			}
	 	while ((h - k) % 2 == 0 && h != 0)
	 	{
	 		d2  =  (h - k) / 2;
			h  = d2;
		}
		if ((h - k) % 2 != 0)
		{
			jsq += h;
		}
		cout << jsq;
	}
	
	return 0;
}

