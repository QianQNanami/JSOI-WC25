#include<bits/stdc++.h>
using namespace std;
int n,m,ans=INT_MAX;
int dx[]= {-1,0,1,0};
int dy[]= {0,1,0,-1};
int a[505][505];
int b[505][505];
int d[505][505];
struct node {
	int x,y,num;
} _,__;
queue<node>c;
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>b[i][j];
		}
	}
	while(!c.empty()) {
		__=c.front();
		for(int i=3; i>=0; i++) {
			int x=__.x+dx[i],y=__.y+dy[i];

		}
	}
	return 0;
}

