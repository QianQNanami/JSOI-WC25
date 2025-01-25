#include <bits/stdc++.h>
using namespace std;
int a[100000000];
int maxn(int n)
{
	int maxx = -1, maxi = 0;
	for(int i = 0;i < n;i++)
	{
		if(a[i] > maxx)
		{
		    maxx = a[i];
		    maxi = i;
	    }
	}
	return maxx;
}
int maxni(int n)
{
	int maxx = -1, maxi = 0;
	for(int i = 0;i < n;i++)
	{
		if(a[i] > maxx)
		{
		    maxx = a[i];
		    maxi = i;
	    }
	}
	return maxi;
}
int main()
{
    int n, t;
    cin >> n >> t;
    for(int i = 0;i < n;i++)
    {
    	cin >> a[i];
	}
	int end = n - 1;
	int sum = 0;
	for(int i = 0;i < end;i++)
	{
		if(a[i] == maxn(n))
		{
			sum++;
			if(t == maxni(n))
			{
				cout << sum<<endl;
				return 0;
			}
		}else{
			if(t == i)
			{
				end++;
			    int y = a[i];
			    a[i] = 0;
			    a[end] = y;
			    t = end;
			}else{
				end++;
			    int y = a[i];
			    a[i] = 0;
			    a[end] = y;
			}
		}
	}
	return 0;
}

