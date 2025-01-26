#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		int v=0,xy = 0;
		int a[6] = {0,0,0,0,0,0};
		for (int i = 0;i < 6;i++)
		{
			cin >> a[i];
			if (i==1)
			{
				a[i] /= 6;
				if (a[i]%6!=0)
				{
					a[i]+=1;
				 }
			}
			else if (i == 2)
			{
				a[i] /= 3;
				if (a[i]%6!=0)
				{
					a[i]+=1;
				 }
			}
			else if (i == 3)
			{
				a[i] /= 2;
				if (a[i]%6!=0)
				{
					a[i]+=1;
				 } 
			}
			if (a[i]==0)
			{
				v+=1;
			}
			else
			{
				xy += a[i]*(i+1);
			}
			
		}
		if (v >= 6)
		{
			break;
		}
		int b = xy/6+1;
		if (b%6 == 0)
		{
			b-=1;
		}
		cout << b-1 << endl;
	}
	return 0;
}
