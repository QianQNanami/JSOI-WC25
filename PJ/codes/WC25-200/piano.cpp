#include <bits/stdc++.h>
using namespace std;
int a[1005],b[23];
int main()
{
	int n,m;
	int x,y;
	cin >> n;
	for(int i=1; i<=m; i++)
	cin >> a[i];
	for(int j=1; j<=m; j++)
	cin >> b[i];
	while(t==1)
	{
		t+=1;
		if(a[i])
		{
			if(x+=a[i]-b[i])
			{
				t++;
				for(int i=1; i<=m; i++)
				{
					t+=t*2
				}
			}
			cout << t <<endl;
		}
		else cout <<"-1"<<endl;
	}
	return 0;
}
