#include<bits/stdc++.h>
using namespace std;
int n,m,x2,y2,ans=1e8,f;
char a[520][520];
int mark[520][520];
int dx[]={0,-1,0,1},dy[]={-1,0,1,0};
bool cheak(int x,int y){
	return x>=1&&x<=n&&y>=1&&y<=m;
}
void Dfs(int x,int y,int time){
	if(x==x2&&y==y2){
		ans=min(time,ans);
		f=1;
		return;
	}
	for(int i=0;i<4;i++){
		int nx=dx[i]+x,ny=dy[i]+y;
		if(a[nx][ny]=='B'&&cheak(nx,ny)&&mark[nx][ny]==0){
			mark[nx][ny]=1;
			Dfs(nx,ny,time+2);
			mark[nx][ny]=0;			
		}
		else if(a[nx][ny]!='R'&&a[nx][ny]!='S'&&cheak(nx,ny)&&mark[nx][ny]==0){
			mark[nx][ny]=1;
			Dfs(nx,ny,time+1);
			mark[nx][ny]=0;
		}
	}
}
int main(){
	cin>>n>>m;
	int x,y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				x=i;
				y=j;
			}
			if(a[i][j]=='T'){
				x2=i;
				y2=j;
			}
		}
	}
	Dfs(x,y,0);
	if(f==0){
		cout<<-1;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
}
