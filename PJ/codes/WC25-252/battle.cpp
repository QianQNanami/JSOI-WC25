#include<bits/stdc++.h>
using namespace std;
char a[1009][1009];
int m,n,p,q,ans=1e9;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0},vis[1009][1009];
void dfs(int x,int y,int step){
	if(a[x][y]=='T')ans=min(ans,step);
	else {
		for(int i=0;i<4;i++){
			int tx=dx[i]+x;
			int ty=dy[i]+y;
			if(tx>=1&&ty>=1&&tx<=m&&ty<=n&&a[tx][ty]!='R'&&a[tx][ty]!='S'&&!vis[tx][ty]){
				vis[tx][ty]=1;
				if(a[tx][ty]=='T')dfs(tx,ty,step+1);
				if(a[tx][ty]=='E')dfs(tx,ty,step+1);
				if(a[tx][ty]=='B')dfs(tx,ty,step+2);
				vis[tx][ty]=0;
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y')p=i,q=j;
		}
	}
	dfs(p,q,0);
	if(ans==1e9)cout<<-1;
	else cout<<ans;
} 
