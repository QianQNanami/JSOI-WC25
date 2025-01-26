#include<bits/stdc++.h>
using namespace std;
int a[501][501],n,m,b[501][501],dx=INT_MAX,dy=INT_MAX,c[501][501],ex=INT_MIN,ey=INT_MIN;
bool k[501][501];
short fx[]={0,0,1,0,-1};
short fy[]={0,1,0,-1,0};
void dfs(int x,int y,int d){
	c[x][y]=min(c[x][y],d);
	k[x][y]=1;
	for(int i=1;i<=4;i++){
		int tx=x+fx[i],ty=y+fy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&k[tx][ty]==0){
			if(b[tx][ty]==1){
				b[tx][ty]=0;
				dfs(tx,ty,max(d,abs(d-a[tx][ty])));
				b[tx][ty]=1;
				k[tx][ty]=0;
			}else{
				dfs(tx,ty,max(d,abs(d-a[tx][ty])));
				k[tx][ty]=0;
			}
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
			c[i][j]=INT_MAX;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&b[i][j]);
			if(b[i][j]==1){
				dx=min(dx,i);
				dy=min(dy,j);
				ex=max(ex,i);
				ey=max(ey,j);
			}
		}
	}
	dfs(dx,dy,0);
	printf("%d",c[ex][ey]);
	return 0;
}
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
