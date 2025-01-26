#include <bits/stdc++.h>
using namespace std;

struct node{
	int x,y,s;
	node(int _x,int _y,int _s){
		x=_x,y=_y,s=_s;
	}
	
};
queue<node> q;
int n,m;
string gbc[305];
char a[305][305];
int vis[305][305];
int yx,yy,tx,ty;
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
void bfs(){

	q.push(node(yx,yy,0));
	vis[yx][yy]=1;
	while(!q.empty()){
		for(int i=0;i<4;i++){
			int dx=q.front().x+d[i][0];
			int dy=q.front().y+d[i][1];
			int step=q.front().s;
			
			if(dx>0 && dy>0 && dx<=n &&dy<=m && !vis[dx][dy] && a[dx][dy]!='S' &&a[dx][dy]!='R')
			{
				vis[dx][dy]=1;
				
				if(a[dx][dy]=='B'){
					
					q.push(node(dx,dy,step+2));
				}
				else{
					
					q.push(node(dx,dy,step+1));
				}
				if(a[dx][dy]=='T'){
					
					cout<<q.back().s;
					return;
				}
			}
			
		}
		q.pop();
	}
	cout<<-1;
	return;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		cin>>gbc[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=gbc[i][j-1];
			if(a[i][j]=='Y'){
				yx=i;
				yy=j;
				
			}
			if(a[i][j]=='T'){
				tx=i;
				ty=j;
				
			}
		}
	}
	bfs();
	return 0;
}
