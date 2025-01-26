#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define fi first
#define se second
int a[1000][1000];
int vis[1000][1000];
int ans=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
map<pii,int>mp;
int mind=INT_MAX;
int n,m;
void dfs(pii f,int step,int cnt,int nowd){
	if(nowd>mind){
		//cout<<1<<endl;
		return;
	}
	if(cnt==ans){
		mind=min(nowd,mind);
		//cout<<nowd<<endl;
		return;
	}
	cnt+=mp[f];
	for(int i=0;i<4;i++){
		int xx=f.fi+dx[i];
		int yy=f.se+dy[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=m&&!vis[xx][yy]){
			//cout<<xx<<','<<yy<<':'<<abs(a[xx][yy]-a[f.fi][f.se])<<endl;
			vis[xx][yy]=1;
			dfs({xx,yy},step+1,cnt,abs(a[xx][yy]-a[f.fi][f.se]));
			vis[xx][yy]=0;
		}
	}
}
int main(){
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	pii fs={0,0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int t;
			cin>>t;
			if(t==1){
				ans++;
				if(fs.fi==0){
					fs={i,j};
				}
				mp[{i,j}]=1;
			}
		}
	}
	vis[fs.fi][fs.se]=1;
	dfs(fs,0,1,0);
	cout<<mind;
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
