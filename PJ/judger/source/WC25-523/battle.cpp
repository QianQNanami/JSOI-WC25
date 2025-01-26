#include<bits/stdc++.h>
using namespace std;
const int N=300;
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};
int n,m,ans=0x3f3f3f3f;
int bx,by,ex,ey;
bool vis[N+10][N+10],f;
char s[N+10][N+10];
void dfs(int x,int y,int step,int dep){
	//cout<<x<<" "<<y<<" "<<step<<" "<<s[x][y]<<endl;
	if(abs(ex-x)+abs(ey-y)>dep) return;
	if(step>ans) return;
	if(s[x][y]=='T'){
		ans=min(ans,step);
		f=true;
		return;
	}
	for(int i=0;i<4;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if(tx<1||tx>n||ty<1||ty>m) continue;
		if(vis[tx][ty]==true) continue;
		if(s[tx][ty]=='R'||s[tx][ty]=='S') continue;
		vis[tx][ty]=true;
		if(s[tx][ty]=='B') dfs(tx,ty,step+2,dep);
		else dfs(tx,ty,step+1,dep);
		vis[tx][ty]=false;
	}
	return;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
			if(s[i][j]=='Y') bx=i,by=j;
			if(s[i][j]=='T') ex=i,ey=j;
		}
	}
	vis[bx][by]=true;
	for(int i=abs(bx-ex)+abs(bx-ex);i<=n*m;i++){
		dfs(bx,by,0,i);
		if(f){
			cout<<ans<<"\n";
			return 0;
		}
	}
	cout<<"-1\n";
	return 0;
} 
