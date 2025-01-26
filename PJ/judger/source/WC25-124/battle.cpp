#include<bits/stdc++.h>
using namespace std;
int n,m,a[305][305];
int sx,sy,ex,ey,ans=INT_MAX;
int dir[4][2]={{0,1},
			   {1,0},
			   {0,-1},
			   {-1,0}};
struct Brick{
	int x,y,time;
	Brick(int _x,int _y,int _time){
		x=_x,y=_y,time=_time;
	}
};
void bfs(){
	queue<Brick>q;
	q.push(Brick(sx,sy,0));
	while(!q.empty()){
		if(q.front().x==ex&&q.front().y==ey)
			ans=min(ans,q.front().time);
		else for(int i=0;i<4;i++){
			int newx=q.front().x+dir[i][0];
			int newy=q.front().y+dir[i][1];
			if(!a[newx][newy])continue;
			q.push(Brick(newx,newy,q.front().time+a[newx][newy]));
			a[newx][newy]=0;
		}
		q.pop();
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			switch(c){
				case 'Y':a[i][j]=1;sx=i,sy=j;break;
				case 'T':a[i][j]=1;ex=i,ey=j;break;
				case 'E':a[i][j]=1;break;
				case 'B':a[i][j]=2;break;
			}
		}
	bfs();
	if(ans==INT_MAX)cout<<-1;
	else cout<<ans;
	return 0;
}
