#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[505][505];
int h[30005][2];
short dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
bool vis[505][505];
int p=0;
int ans1,ans2;
void dfs(int x,int y,int tx,int ty,int s){
	if (x==tx&&y==ty){
		ans1=min(ans1,s);
		return;
	}
	for (int i=0;i<4;i++){
		int x1=x+dx[i],y1=y+dy[i];
		if (x1>=1&&x1<=m&&y1>=1&&y1<=n&&(!vis[x1][y1])){
			int s1=max(s,abs(a[x1][y1]-a[x][y]));
			if (s1>ans1) continue;
			vis[x1][y1]=1;
			dfs(x1,y1,tx,ty,s1);
			vis[x1][y1]=0;
		}
	}
	return;
}
int main(){
	cin>>m>>n;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int l;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>l;
			if (l){
				h[++p][0]=i;
				h[p][1]=j;
			}
		}
	}
	for (int i=1;i<p;i++){
		for (int j=i+1;j<=p;j++){
			ans1=INT_MAX;
			memset(vis,0,sizeof(vis));
			vis[h[i][0]][h[i][1]]=1;
			dfs(h[i][0],h[i][1],h[j][0],h[j][1],0);
			ans2=max(ans2,ans1);
		}
	}
	cout<<ans2;
	
	return 0;
	
}
