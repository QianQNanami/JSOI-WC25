#include<bits/stdc++.h>
using namespace std;
int m,n,d,ans=INT_MAX,cnt,sum;
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
long long a[501][501],c[501][501];
bool b[501][501];
void dfs(int x,int y){
	c[x][y]=-1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>=1&&ny>=1&&nx<=m&&ny<=n&&c[nx][ny]!=-1){
			if(b[nx][ny]==1){
				cnt++;
				d=d+abs(a[nx][ny]-a[x][y]);
				if(cnt==sum){
					if(ans>d) ans=d;
					return;
				}
				else dfs(nx,ny);
			}
			else{
				d=d+abs(a[nx][ny]-a[x][y]);
				cout<<d<<endl;
				dfs(nx,ny);
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		cin>>a[i][j];
		c[i][j]=a[i][j];
	}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		cin>>b[i][j];
		if(b[i][j]) sum++;
	}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	if(b[i][j]){
		for(int x=1;x<=m;x++)
		for(int y=1;y<=n;y++) c[i][j]=a[i][j];
		cnt=1;
		d=0;
		dfs(i,j);
	}
	cout<<ans;
	return 0;
}
