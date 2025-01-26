#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=305;
int n,m;
char Map[N][N];
int qx,qy,x2,y2;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
bool vis[N][N];
int a[N][N];
typedef pair<int,int> PII;
queue<PII> q;
int bfs(){
	while(!q.empty()){
		PII t=q.front();
		int x=t.first,y=t.second;
		for(int i=0;i<4;i++){
			int tx=x+dx[i],ty=y+dy[i];
			if(tx<1||tx>m||ty<1||ty>n||vis[tx][ty]||Map[tx][ty]=='R'||Map[tx][ty]=='S'||a[tx][ty]!=0){
				continue;
			}
			q.push({tx,ty});
			vis[tx][ty]=1;
			if(Map[tx][ty]=='B') a[tx][ty]=a[x][y]+2;
			else a[tx][ty]=a[x][y]+1;
		}
		q.pop();
	}
	if(a[x2][y2]==0) return -1;
	else return a[x2][y2]-1;
}
signed main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>Map[i][j];
			if(Map[i][j]=='Y') qx=i,qy=j;
			else if(Map[i][j]=='T') x2=i,y2=j;
		}
	}
	vis[qx][qy]=1;
	a[qx][qy]=1;
	q.push({qx,qy});
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++) cout<<vis[i][j]<<" ";
//		cout<<endl;
//	}
	cout<<bfs();
	return 0;
}
