#include<bits/stdc++.h>
using namespace std;
int m,n,Tx,Ty,Yx,Yy;
char a[300+10][300+10];
bool vis[300+10][300+10];
int dx[5]={0,1,0,-1,0},dy[5]={0,0,1,0,-1};
int minn=INT_MAX;
void dfs(int x,int y,int time){
	if(a[x][y]=='T'){
		minn=min(minn,time);
		return;
	}
	for(int i=1;i<=4;i++){
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(vis[xx][yy]==0){
			if(a[xx][yy]=='B'){
				vis[xx][yy]=1;
				dfs(xx,yy,time+2);
				vis[xx][yy]=0;
			}
			if(a[xx][yy]=='E'||a[xx][yy]=='T'){
				vis[xx][yy]=1;
				dfs(xx,yy,time+1);
				vis[xx][yy]=0;
			}
		}
	}
	
}
int main(){
	cin>> m >> n;
	for(int i=0;i<=m+1;i++)
		for(int j=0;j<=n+1;j++)
			vis[i][j]=1;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			vis[i][j]=0;
	for(int i = 1; i <= m;i ++){
			string s;
			cin>>s;
		for(int j = 1; j <= n;j ++){
			a[i][j]=s[j-1];
			if(a[i][j] == 'T')Tx=i,Ty=j; 
			else if(a[i][j] == 'Y')Yx=i,Yy=j,vis[i][j]=1; 
			else if(a[i][j] == 'S'||
					a[i][j] == 'R') vis[i][j]=1; 
		}
	}
	dfs(Yx,Yy,0);
	cout<<minn;
	return 0;
}

