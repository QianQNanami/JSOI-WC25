#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,steps,ans=100000,cnt=0,num[100001];
char maze[1001][1001];
bool vis[1001][1001];
void bfs(int x,int y){
	if(maze[x][y]=='T') cout<<steps-1<<'\n';
	else{
		if(x>=1&&x<=n&&(y+1)>=1&&(y+1)<=m&&(maze[x][y+1]=='E'||maze[x][y+1]=='B')&&!vis[x][y+1]){
			vis[x][y+1]=1;
			bfs(x,y+1);
			steps+=(maze[x][y+1]=='B')+1;
		}
		if((x+1)>=1&&(x+1)<=n&&y>=1&&y<=m&&(maze[x+1][y]=='E'||maze[x+1][y]=='B')&&!vis[x+1][y]){
			vis[x+1][y]=1;
			bfs(x+1,y);
			steps+=(maze[x+1][y]=='B')+1;
		}
	    if((x-1)>=1&&(x-1)<=n&&y>=1&&y<=m&&(maze[x-1][y]=='E'||maze[x-1][y]=='B')&&!vis[x-1][y]){
			vis[x-1][y]=1;
			bfs(x-1,y);
			steps+=(maze[x-1][y]=='B')+1;
		}
		if(x>=1&&x<=n&&(y-1)>=1&&(y-1)<=m&&(maze[x][y-1]=='E'||maze[x][y-1]=='B')&&!vis[x][y-1]){
			vis[x][y-1]=1;
			bfs(x,y-1);
			steps+=(maze[x][y-1]=='B')+1;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>maze[i][j];
			if(maze[i][j]=='Y'){
				a=i;
				b=j;
			}
		}
	}
	vis[a][b]=1;
	bfs(a,b);
	cout<<steps-1<<'\n';
	return 0;
}
