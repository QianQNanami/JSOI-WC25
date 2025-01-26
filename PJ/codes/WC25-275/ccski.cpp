#include<bits/stdc++.h>
using namespace std;
const int N=505;
int m,n,a[N][N],used[N][N],cnt=0;
int ans=-1e9,t=1e9;
int ex,ey,sx,sy;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
pair<int,int>flag[N];
map<pair<int,int>,int>mp;
bool check(int a1,int b1){
	if(a1<1 || a1>m || b1<1 || b1>n)return false;
	return !used[a1][b1];
}
void dfs(int x,int y,int ans1){
	if(x==ex && y==ey)t=min(t,ans1);
	else{
		if(ans1>t)return;
		else{
			for(int i=0;i<4;i++){
				int nx=x+dx[i];
				int ny=y+dy[i];
				if(check(nx,ny)){
					used[nx][ny]=1;
					dfs(nx,ny,max(ans1,abs(a[x][y]-a[nx][ny])));
					used[nx][ny]=0;
				}
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
	int x;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++){
		cin>>x;
		if(x)flag[++cnt]=make_pair(i,j);
	}
	for(int i=1;i<=cnt;i++){
		int min1=1e9;
		for(int j=1;j<=cnt;j++)if(i!=j){
			if(mp[make_pair(i,j)]!=0)min1=min(min1,mp[make_pair(i,j)]);
			else if(mp[make_pair(j,i)]!=0)min1=min(min1,mp[make_pair(j,i)]);
			else{
				t=1e9;
				sx=flag[i].first;
				sy=flag[i].second;
				ex=flag[j].first;
				ey=flag[j].second;
				dfs(sx,sy,0);
				mp[make_pair(i,j)]=t;
				mp[make_pair(j,i)]=t;
				min1=min(min1,t);
			}
		}
		ans=max(ans,min1);
	}
	cout<<ans;
	return 0;
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
