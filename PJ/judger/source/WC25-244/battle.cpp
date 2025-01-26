#include<bits/stdc++.h>
using namespace std;
int m,n;
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
char a[505][505];
int vis[505][505],dp[505][505];
void dfs(int x,int y,int step){
	for(int i=0;i<4;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(!vis[tx][ty]&&(a[tx][ty]=='E'||a[tx][ty]=='T')){
			if(step+1<dp[tx][ty]){
				dp[tx][ty]=step+1;
				vis[tx][ty]=1;
				dfs(tx,ty,step+1);
				vis[tx][ty]=0;
			}
		}
		else if(!vis[tx][ty]&&a[tx][ty]=='B'){
			if(step+2<dp[tx][ty]){
				dp[tx][ty]=step+2;
				vis[tx][ty]=1;
				dfs(tx,ty,step+2);
				vis[tx][ty]=0;
			}
		}
	}
}
int main(){
	int sx,sy,ex,ey;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=INT_MAX;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				sx=i;
				sy=j;
			}
			if(a[i][j]=='T'){
				ex=i;
				ey=j;
			}
		}
	}
	dfs(sx,sy,0);
	if(dp[ex][ey]!=INT_MAX){
		cout<<dp[ex][ey]<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	return 0;
}
