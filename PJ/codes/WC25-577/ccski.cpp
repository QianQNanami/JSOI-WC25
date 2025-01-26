#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[505][505];
int b[505][505];
struct node{
	int x,y,d;
};
bool vis[505][505];
int dx[5]={0,1,0,-1};
int dy[5]={1,0,-1,0};
queue<node>q;
int ans=0;
void bfs(int x1,int y1,int x2,int y2){
	int cnt=1e9;
	node l;
	l.x=x1;
	l.y=y1;
	l.d=0;
	q.push(l);
	while(!q.empty()){
		node f=q.front();
		if(f.x==x2&&f.y==y2){
			cnt=min(cnt,f.d);
		}
		for(int i=0;i<4;i++){
			int nx=f.x+dx[i];
			int ny=f.y+dy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&!vis[nx][ny]){
				node g;
				g.x=nx;
				g.y=ny;
				g.d=abs(a[f.x][f.y]-a[nx][ny]);
				q.push(g);
				vis[nx][ny]=1;
			}
		}
	}
	ans=max(cnt,ans);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	bool b1=0;
	int x,y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
			
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]==1){
				if(!b1){
					b1=1;
					x=i;
					y=j;
				}else{
					bfs(x,y,i,j);
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
