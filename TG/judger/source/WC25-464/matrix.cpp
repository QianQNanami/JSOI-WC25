#include<bits/stdc++.h>
using namespace std;
const int N=420;	
int n;
int a[N][N];
int pls[N][N],con[N][N];
int ans[N][N]; 
void ask(int x,int y)
{
	int m=min(x,y);
	for(int i=2;i<=m;i++)
		ans[x][y]=max(ans[x][y],pls[x][y]-pls[x-m][y-m]-con[x][y-m+1]+con[x-m][y-1]);
} 
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout); 
	memset(ans,-0x3f3f3f3f,sizeof(ans));
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
	{
		pls[1][i]=a[1][i];
		pls[i][1]=a[i][1];
	}	
	for(int i=2;i<=n;i++)
		for(int j=2;j<=n;j++)
			pls[i][j]=pls[i-1][j-1]+a[i][j];
	for(int i=n;i>=1;i--)	{con[1][i]=a[1][i];	con[i][n]=a[i][n]; }
	for(int i=2;i<=n;i++)
		for(int j=n-1;j>=1;j--)
			con[i][j]=con[i-1][j+1]+a[i][j];
	int res=-0x3f3f3f3f;
	for(int i=2;i<=n;i++)
		for(int j=2;j<=n;j++)
		{
			ask(i,j);
			if(res<ans[i][j])	res=ans[i][j];
		}
	cout<<res;
	return 0;
}
/*
3 
1 2 3
4 5 6
7 8 9
*/
