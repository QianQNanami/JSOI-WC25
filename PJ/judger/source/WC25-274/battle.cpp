#include <bits/stdc++.h>
using namespace std;
int n,m,ans,x,y,vis[301][301],cnt;
char a[302][302];
int dfs(int x,int y){
	cnt++;
	if(vis[x][y]=='T') return 1;
	if(vis[x][y+1]==1 ||vis[x+1][y]==1 || vis[x-1][y]==1|| vis[x][y-1]==1)return 0;
	
	if(a[x][y]!='S' && a[x][y]!='R'){
		if(a[x+1][y]!='S' && a[x+1][y]!='R' && vis[x+1][y]!=1){
			if(a[x+1][y]=='B'){vis[x+1][y]=1;ans+=2;}
			else {vis[x+1][y]=1;ans++;}
			dfs(x+1,y);
		}
		if(a[x][y+1]!='S' && a[x][y+1]!='R' && vis[x][y+1]!=1){
			if(a[x][y+1]=='B'){vis[x][y+1]=1;ans+=2;}
			else {vis[x][y+1]=1;ans++;}
			dfs(x,y+1);
		}
		if(a[x-1][y]!='S' && a[x-1][y]!='R' && vis[x-1][y]!=1){
			if(a[x-1][y]=='B'){vis[x-1][y]=1;ans+=2;}
			else {vis[x-1][y]=1;ans++;}
			dfs(x-1,y);
		}
		if(a[x][y-1]!='S' && a[x][y-1]!='R' && vis[x][y-1]!=1){
			if(a[x][y-1]=='B'){vis[x][y-1]=1;ans+=2;}
			else {vis[x][y-1]=1;ans++;}
			dfs(x,y-1);
		}
		
	}
	if(cnt>300*300) {
		cout<<-1;
		return 0;
	}
	
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				x=i;
				y=j;
			}
		}
	}
	dfs(x,y);
	cout<<ans;
	return 0;
}
/*
3 4
YBEB
EERE
SSTE
*/
