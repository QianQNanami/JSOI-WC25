#include <bits/stdc++.h>
using namespace std;
int a[501][501];
int b[501][501],vis[501][501],min1=10e9,cnt;
int ans,n,m;
/*int dfs(int x,int y,int c){
	if(c==0) return min1;
	if(a[x][y]==1 && vis[x][y]!=1){
		c--;
		vis[x][y]=1;
	}
	int sum=1000000;
	if(y+1<=m) sum=min(sum,a[x][y+1]);
	if(y-1<=m) sum=min(sum,a[x][y-1]);
	if(x+1<=n) sum=min(sum,a[x+1][y]);
	if(x-1<=n) sum=min(sum,a[x-1][y]);
	if(sum==a[x][y+1]) y++;
	if(sum==a[x][y-1]) y--;
	if(sum==a[x++][y]) x++;
	if(sum==a[x--][y]) x--;
	dfs(x,y,cnt);
}*/
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[n][m];
			min1=min(min1,a[n][m]);
		}
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[n][m];
			if(a[n][m]==1) cnt++;
		}
	}
/*	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ans=min(dfs(i,j,cnt),ans);
		}
	}*/
	
	cout<<min1;
	return 0;
}
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/ 
