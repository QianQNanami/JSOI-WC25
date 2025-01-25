#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[405][405];
int d[405][405],s[405][405];
void dfs1(int x,int y){
	if(x==n+1||y==n+1)return;
	d[x][y]=d[x-1][y-1]+a[x][y];
	dfs1(x+1,y+1);
}
void dfs2(int x,int y){
	if(x==n+1||y==0)return;
	s[x][y]=s[x-1][y+1]+a[x][y];
	dfs2(x+1,y-1);
}
int ans=-20000000000;
signed main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		dfs1(i,1);
		dfs1(1,i);
		dfs2(i,n);
		dfs2(1,i);
	}
	for(int len=1;len<=n;len++){
		for(int i=1;i+len-1<=n;i++){
			for(int j=1;j+len-1<=n;j++){
				ans=max(ans,d[i+len-1][j+len-1]-d[i-1][j-1]-(s[i+len-1][j]-s[i-1][j+len]));
			}
		}
	}
	cout<<ans;
	return 0;
}

