#include <bits/stdc++.h>
using namespace std;
#define int long long
int m,n;
int a[305][305];
int b[305][305];
int dlt[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int minn=INT_MAX;
bool check(int x,int y){
	if(x<1||y<1||x>m||y>n||b[x][y]==-1)return 0;
	return 1;
}
int k;
void dfs(int x,int y,int ans,int cnt){
	if(cnt==k){
		minn=min(minn,ans);
		return ;
	}
	for(int i=0;i<4;i++){
		int dx=x+dlt[i][0];
		int dy=y+dlt[i][1];
		if(check(dx,dy)){
			if(b[dx][dy]==1){
				b[dx][dy]=-1;
				int o=abs(a[x][y]-a[dx][dy]);
				if(o>ans){
					dfs(dx,dy,o,cnt+1);
					b[dx][dy]=1;
				}
				if(o<ans){
					dfs(dx,dy,ans,cnt+1);
					b[dx][dy]=1;
				}
			}
			
			else{
				b[dx][dy]=-1;
				int o=abs(a[x][y]-a[dx][dy]);
				if(o>ans){
					dfs(dx,dy,o,cnt);
					b[dx][dy]=0;
				}
				if(o<ans){
					dfs(dx,dy,ans,cnt);
					b[dx][dy]=0;
				}
			}
		}
	}
}
signed main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(b[i][j]==1)k++;
		}
	}
	dfs(1,1,0,0);
	cout<<minn;
	return 0;
}
