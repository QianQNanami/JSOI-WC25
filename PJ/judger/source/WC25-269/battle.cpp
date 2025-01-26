#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[305][305];
bool vis[305][305];
const int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
struct node{
	int x,y,ans;
	node(int a,int b,int c){
		x=a,y=b,ans=c;
	}
};
queue<node>q;
void bfs(int sx,int sy,int ex,int ey){
	q.push(node(sx,sy,0));
	vis[sx][sy]=true;
	if(sx==ex&&sy==ey)cout<<0;
	while(!q.empty()){
		node u=q.front();
		for(int i=0;i<4;i++){
			int nx=u.x+dir[i][0],ny=u.y+dir[i][1];
			if(1<=nx&&nx<=n&&1<=ny&&ny<=m&& !vis[nx][ny] && a[nx][ny]){
				if(nx==ex&&ny==ey){
					cout<<u.ans+a[nx][ny];
					return ;
				}
				vis[nx][ny]=true;
				q.push(node(nx,ny,u.ans+a[nx][ny]));
			}
		}
		q.pop();
	}
	cout<<-1;
}
int main(){
	cin>>n>>m;
	char s;
	int sx,sy,ex,ey;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s;
			if(s=='Y'){
				sx=i,sy=j;
				a[i][j]=1;
			}else if(s=='T'){
				ex=i,ey=j;
				a[i][j]=1;
			}else if(s=='E'){
				a[i][j]=1;
			}else if(s=='B'){
				a[i][j]=2;
			}
		}
	}
	bfs(sx,sy,ex,ey);
	return 0;
}
/*
3 4
YBEB
EERE
SSTE
*/
