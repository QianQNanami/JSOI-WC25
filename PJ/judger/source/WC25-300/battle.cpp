#include<bits/stdc++.h>
using namespace std;

int a[301][301];
int ans[301][301];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int n,m,xa,ya,xb,yb,nx,ny;
char c;

void dfs(int x,int y,int time){
	for(int i=1;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		bool flag=false;
		switch (a[nx][ny]){
			case 2:case 1:flag=true;break;
			case 0: a[nx][ny]=1;time+=1;break;
			case -1:a[nx][ny]=1;time+=2;break;
		}
		if(ans[nx][ny]>time) ans[nx][ny]=time;
		else flag=true;
		if(flag) continue;
		dfs(nx,ny,time);
		switch (a[nx][ny]){
			case 0: a[nx][ny]=0;time-=1;break;
			case -1:a[nx][ny]=-1;time-=2;break;
		}
	}
}
int main(){

	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			switch(c){
				case 'S':case 'R':a[i][j]==2;break;
				case 'E':a[i][j]==0;break;
				case 'B':a[i][j]==-1;break;
				case 'T':xb=i,yb=j;a[i][j]=1;break;
				case 'Y':xa=i,ya=j;a[i][j]=3;break;
			}
		}
	}
	
	dfs(xa,xb,0);
	
	cout<<ans[xb][yb]<<endl;
	//求放过，给点分……
	return 0;
}
