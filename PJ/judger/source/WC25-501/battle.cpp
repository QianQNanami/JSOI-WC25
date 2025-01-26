#include<bits/stdc++.h>
using namespace std;
int m,n,t[301][301],bx,by,ex,ey;
char a[301][301];
bool b[301][301];
short fx[]={0,0,1,0,-1};
short fy[]={0,1,0,-1,0};
void dfs(int x,int y,int time){
	t[x][y]=min(t[x][y],time);
	b[x][y]=1;
	if(x==ex&&y==ey){
		return;
	}
	for(int i=1;i<=4;i++){
		int tx=x+fx[i],ty=y+fy[i];
		if(tx>=1&&tx<=m&&ty>=1&&ty<=n&&b[tx][ty]==0){
			if(a[tx][ty]=='E') dfs(tx,ty,time+1);
			else if(a[tx][ty]=='B'){
				a[tx][ty]='E';
				dfs(tx,ty,time+2);
				a[tx][ty]='B';
			}else if(a[tx][ty]=='T') dfs(tx,ty,time+1);
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				bx=i;
				by=j;
			}
			if(a[i][j]=='T'){
				ex=i;
				ey=j;
			}
			t[i][j]=INT_MAX;
		}
	}
	dfs(bx,by,0);
	if(t[ex][ey]==INT_MAX) printf("%d",-1);
	else printf("%d",t[ex][ey]);
	return 0;
}
/*
3 4
YBEB
EERE
SSTE
*/
