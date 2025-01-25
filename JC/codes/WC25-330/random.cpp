#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int main()
{
    int n;
    cin >> n;
    int u = n;
    for(int i = 0;i < n;i++)
    {
    	cin >> a[i];
	}
	int q;
	cin >> q;
	for(int i = 0;i < q;i++)
	{
		int m;
		cin >> m;
		if(m == 1)
		{
			int x, y, l;
			cin >> x >> y;
			for(int j = 0;j < n;j++)
			{
				if(a[j] == x) l = j+1;continue;
			}
			n++;
			for(int j = n;j > l;j--)
			{
				a[j] = a[j-1];
			}
			a[l] = y;
		}else
		{
			int x;
			cin >> x;
			for(int i = 0;i < n;i++)
			{
				if(a[i] == x)
				{
					a[i] = -1;
					continue;
				}
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		if(a[i] > 0) cout << a[i] << " ";
	}
	return 0;
}

