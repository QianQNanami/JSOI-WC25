#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[510][510];
bool b[510][510];
int sx,sy,ex,ey;
int fx[5]={0,1,0,-1,0};
int fy[5]={0,0,1,0,-1};
int dep[510][510];//¼ÇÒäÊý×é 
int step=INT_MAX;
void dfs(int x,int y,int deep){
	for(int i=1;i<=4;i++){
		int tx=fx[i]+x;
		int ty=fy[i]+y;
		if(a[tx][ty]==a[ex][ey]){
		step=min(step,deep+abs(a[x][y]-a[tx][ty]));	
		}
         if(tx<=n&&tx>=1&&ty<=m&&ty>=1){
        if(dep[tx][ty]<=deep+abs(a[x][y]-a[tx][ty])){
			continue;
		}
		else{
		  dep[tx][ty]=deep+abs(a[x][y]-a[tx][ty]);
		  dfs(tx,ty,deep+abs(a[x][y]-a[tx][ty]));
		}
}
}
}
bool s=false;
int main(){
	memset(dep,1,sizeof(dep));
cin>>n>>m;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
	}
}
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>b[i][j];
		if(b[i][j]==1&&a[i][j]<=a[sx][sy]){
			sx=i;
			sy=j;
		}
		if(b[i][j]==1&&a[i][j]>=a[ex][ey]){
			ex=i;
			ey=j;
		}
	}
}
dfs(sx,sy,0);
cout<<step;
return 0;
}

