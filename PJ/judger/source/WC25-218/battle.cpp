#include<bits/stdc++.h>
using namespace std;
int m,n,ans,v[310][310],flag,minn=INT_MAX;
char a[310][310];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
void dfs(int x,int y,int dep){
	if(a[x][y]=='T'){
		flag=1;
		minn=min(minn,dep);
		return;
	}
	for(int i=0;i<4;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if(tx>=1&&ty>=1&&tx<=m&&ty<=n&&v[tx][ty]==0&&(a[tx][ty]=='E'||a[tx][ty]=='B'||a[tx][ty]=='T')){
			v[tx][ty]=1;
			dfs(tx,ty,dep+1);
			v[tx][ty]=0;
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='Y') dfs(i,j,0);
		}
	}
	if(flag==1) cout<<minn<<endl;
	if(flag==0) cout<<-1<<endl;
	return 0;
}
