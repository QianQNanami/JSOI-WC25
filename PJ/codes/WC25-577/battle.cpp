#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,d;
};
int m,n;
bool b=1;
queue<node>q;
char ch[350][350];
bool vis[350][350];
int dx[5]={0,1,0,-1};
int dy[5]={1,0,-1,0};
void bfs(int x1,int y1,int x2,int y2){
	node d;
	d.x=x1;
	d.y=y1;
	d.d=0;
	q.push(d);
	while(!q.empty()){
		node f=q.front();
		if(f.x==x2&&f.y==y2){
			b=0;
			cout<<f.d<<endl;
			return;
		}
		for(int i=0;i<4;i++){
			node g;
			int nx=f.x+dx[i];
			int ny=f.y+dy[i];
			if(nx>=1&&nx<=m&&ny>=1&&ny<=n&&ch[nx][ny]!='S'&&ch[nx][ny]!='R'&&vis[nx][ny]==0){
				if(ch[nx][ny]=='B'){
					g.x=nx;
					g.y=ny;
					g.d=f.d+2;
					q.push(g);
				}else{
					g.x=nx;
					g.y=ny;
					g.d=f.d+1;
					q.push(g);
				}
				vis[nx][ny]=1;
			}
		}
		q.pop();
	}
}
int main(){
	cin>>m>>n;
	int x,y,x1,y1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>ch[i][j];
			if(ch[i][j]=='Y'){
				x=i;
				y=j;
			}else if(ch[i][j]=='T'){
				x1=i;
				y1=j;
			}
		}
	}
	bfs(x,y,x1,y1);
	if(b){
		cout<<-1;
	}
	return 0;
}
