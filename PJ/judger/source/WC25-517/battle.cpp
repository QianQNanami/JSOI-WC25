#include <bits/stdc++.h>
using namespace std;
char a[310][310];
int dx[5]={0,0,1,0,-1};
int dy[5]={0,1,0,-1,0};
int n,m,ox,oy,minn;
void dfs(int x,int y,int dep){
	cout<<dep<<endl<<x<<" "<<y<<endl;
	if(a[x][y]=='T'&&minn>dep){
		minn=dep;
	}
	a[x][y]='R';
	int tx,ty;
	for(int i=1;i<=4;i++){
		tx=x+dx[i];
		ty=y+dy[i];
		if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&(a[tx][ty]!='R'||a[tx][ty]!='S')){
			if(a[tx][ty]=='E'||a[tx][ty]=='T'){
				dfs(tx,ty,dep+1);
			}else if(a[tx][ty]=='B'){
				dfs(tx,ty,dep+2);
			}
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				ox=i;
				oy=j;
			}
		}
	}
	minn=INT_MAX;
	dfs(ox,oy,0);
	if(minn==INT_MAX){
		cout<<"-1"<<endl;
	}else{
		cout<<minn<<endl;
	}
	return 0;
}
