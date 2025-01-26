#include<bits/stdc++.h>
using namespace std;

struct node{
	int height,d=INT_MAX;
	bool flag;
};

int n,m,xa,ya,k,ans=INT_MAX;
node ma[501][501];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x,int y,int spot){
	if(spot==n){
		ans=min(ans,spot);
		return;
	}
	for(int i=1;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(ma[x][y].d+abs(ma[nx][ny].height-ma[x][y].height)<ma[nx][ny].d){
			ma[nx][ny].d=ma[x][y].d+abs(ma[nx][ny].height-ma[x][y].height);
		}
		else continue;
		if(ma[nx][ny].flag) spot++;
		dfs(nx,ny,spot);
		if(ma[nx][ny].flag) spot--;
	}
}

int main(){
	
	freopen("ccski.in","r",stdin);
	freopen("ccski.out","w",stdout);
	
	bool f=true;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>ma[i][j].height;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>ma[i][j].flag;
			if(ma[i][j].flag){
				k++;
				if(f){f=false; xa=i;ya=j;}
			}
		}
			
	dfs(xa,ya,1);
	cout<<ans<<endl;
	return 0;
	//没有输出……
	//停止工作了 
}
