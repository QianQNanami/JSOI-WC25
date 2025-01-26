#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=505;
int n,m,cnt,ans;
int Map[N][N];
int hb[N][N],sum;
bool vis[N][N];
int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,1,0,-1,1,-1,1,-1};
void dfs(int x,int y,int h,int c){
	if(h==sum){
		ans=max(ans,c);
		return;
	}
	if(hb[x][y]==1) h++;
	vis[x][y]=1;
	for(int i=0;i<8;i++){
		int tx=x+dx[i],ty=y+dy[i];
		if(tx<1||tx>m||ty<1||ty>n||vis[tx][ty]==1) continue;
		if(hb[tx][ty]==1) dfs(tx,ty,h+1,max(c,abs(Map[x][y]-Map[tx][ty])));
		else dfs(tx,ty,h+1,max(c,abs(Map[x][y]-Map[tx][ty])));
	}
	return;
}
signed main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++) cin>>Map[i][j];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>hb[i][j];
			if(hb[i][j]==1) sum++;
		}
	}
	dfs(1,1,0,0);
	cout<<ans;
	return 0;
}
