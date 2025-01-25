#include <iostream>
using namespace std;

const int N=4e2+10;
int a[N][N];
int n,mans=-1e9;

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int k=2;k<=n;k++)
	{
		for(int i=1;i<=n-k+1;i++)
		{
			for(int j=1;j<=n-k+1;j++)
			{
				int lr=a[i][j]+a[i+k-1][j+k-1];
				int rr=a[i+k-1][j]+a[i][j+k-1];
				mans=max(mans,lr-rr);
			}
		}
	}
	cout<<mans;
	return 0;
} 
