#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
	int n;
	while(1)
	{
		for(int i=1; i<=6; i++)
		{
			cin >> a[i];
			n=max(a[i],n);
		}
	}
	for(int i=1; i<=6; i++)
	{
		if(n==0) return 0;
		int x=a[1]+4*a[2]+9*a[3]+16*a[4]+25*a[5]+36*a[6];
		if(x%36==0)
			cout << x/36 <<endl;
		else
			cout << x/36+1 <<endl;
	}	
	n=0;
	return 0;
}
