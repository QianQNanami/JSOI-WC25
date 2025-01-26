#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[505][505],p[505][505];
int dir[4][2]={{0,1},
			   {1,0},
			   {0,-1},
			   {-1,0}};
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)a[i][0]=a[i][m+1]=INT_MIN;
	for(int i=1;i<=m;i++)a[0][i]=a[n][i+1]=INT_MIN;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			int pa=INT_MAX;
			for(int d=0;d<4;d++)
				pa=min(pa,abs(a[i+dir[d][0]][j+dir[d][1]]-a[i][j]));
			p[i][j]=pa;
		}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			bool tmp;
			cin>>tmp;
			if(tmp)ans=max(ans,p[i][j]);
		}
	cout<<ans;
	return 0;
}
