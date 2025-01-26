#include<bits/stdc++.h>
using namespace std;
int x1,yy1,x2,yy2;
int n,m;
bool vis[305][305];
char s[305][305];
int dx[4]= {-1,1,0,0},dy[4]= {0,0,-1,1};
struct node {
	int x,y,t;
};
int bfs(int x,int y) {
	queue<node> q;
	node temp;
	vis[x][y]=1;
	temp.x=x,temp.y=y,temp.t=0;
	q.push(temp);
	while(!q.empty()) {
		temp=q.front();
		q.pop();
		if(s[temp.x][temp.y]=='T') return temp.t;
		for(int i=0; i<4; i++) {
			int sx=dx[i]+temp.x,sy=dy[i]+temp.y;
			if(sx>0&&sx<=n&&sy>0&&sy<=m&&vis[sx][sy]==0&&s[sx][sy]!='R'&&s[sx][sy]!='B'&&s[sx][sy]!='S') {
				node tmp;
				tmp.x=sx,tmp.y=sy,tmp.t=temp.t+1;
				q.push(tmp);
				vis[sx][sy]=1;
			}
			if(sx>0&&sx<=n&&sy>0&&sy<=m&&vis[sx][sy]==0&&s[sx][sy]=='B') {
				node tmp;
				tmp.x=sx,tmp.y=sy,tmp.t=temp.t+2;
				q.push(tmp);
				vis[sx][sy]=1;
			}
		}
	}
	return -1;
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>s[i][j];
			if(s[i][j]=='Y') x1=i,yy1=j;
			if(s[i][j]=='T') x2=i,yy2=j;
		}
	}
	cout<<bfs(x1,yy1);
	return 0;
}

