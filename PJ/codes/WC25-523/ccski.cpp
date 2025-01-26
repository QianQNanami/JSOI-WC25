#include<bits/stdc++.h>
using namespace std;
const int N=500;
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};
int n,m,maxn=0,minn=0x3f3f3f3f3f,nx[N+10],ny[N+10],c;
int a[N+10][N+10],b;
bool vis[N+10][N+10]; 
struct node{
	int x,y;
};
bool check(int k){
	memset(vis,false,sizeof(vis));
	queue<node> q;
	vis[nx[1]][ny[1]]=true;
	q.push({nx[1],ny[1]});
	while(!q.empty()){
		node t=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int tx=t.x+dx[i],ty=t.y+dy[i];
			if(tx<1||tx>n||ty<1||ty>m) continue;
			if(abs(a[tx][ty]-a[t.x][t.y])>k) continue;
			if(vis[tx][ty]) continue;
			vis[tx][ty]=true;
			q.push({tx,ty});
		}
	}
	for(int i=2;i<=c;i++) if(vis[nx[i]][ny[i]]!=true) return false;
	return true;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			maxn=max(maxn,a[i][j]);
			minn=min(minn,a[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b;
			if(b==1)nx[++c]=i,ny[c]=j;
		}
	}
	int lft=1,rgt=maxn-minn,mid;
	while(lft<=rgt){
		mid=(lft+rgt)/2;
		if(check(mid)) rgt=mid-1;
		else lft=mid+1;
		
	}
	cout<<mid<<"\n";
	return 0;
} 
