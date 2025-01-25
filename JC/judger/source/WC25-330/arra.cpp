#include <bits/stdc++.h>
using namespace std;
int l[1000000];
int n, k, sum = 0, i = 0;
bool canf(int n)
{
	if((n-k) % 2 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
    cin >> n >> k;
    l[0] = n;
    while(1)
    {
    	cout << 1<<endl;
    	if(canf(l[i]))
    	{
    		i++;
    		l[i] = (n - k) / 2;
    		i++;
    		l[i] = n - l[i - 1];
		}else
		{
			sum++;
		}
		bool flag = 1;
		for(int j = 0;j < i;j++)
		{
			if(canf(l[j]))
			{
				flag = 0;
				cout <<111111<<endl;
				continue;
			}
		}
		if(flag) break;
	}
	cout << sum <<endl;
	return 0;
}

