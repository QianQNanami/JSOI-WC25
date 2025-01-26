#include <bits/stdc++.h>
using namespace std;
const int MAXN = 300 + 10;
int n, m;
char a[MAXN][MAXN];
bool vis[MAXN][MAXN];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int sx,sy,ex,ey;
int a1,a2,b1,b2;
struct node {
    int x, y, steps;
    node(int _x, int _y, int _steps) : x(_x), y(_y), steps(_steps){}
};
queue<node>q;
void bfs(){
	q.push(node(sx,sy,0));
	vis[sx][sy]=true;
	while(!q.empty()){
		node cur=q.front();
		for(int i=0;i<4;i++){
			int nx,ny; 
			nx = cur.x + dx[i];
            ny = cur.y + dy[i];
			if (!vis[nx][ny]&&(a[nx][ny] =='E'||a[nx][ny] =='B')){
				if(a[nx][ny] =='E'){
					q.push(node(nx,ny,cur.steps + 1));
				}
				if(a[nx][ny] =='B'){
					q.push(node(nx,ny,cur.steps +2));
                }
				vis[nx][ny]=true;
			}
			if (nx == ex && ny == ey) {
                cout<<cur.steps+1<<endl;
                return ;
			}
		}
	q.pop();
	}
	cout<<-1;
}
int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y') sx=i,sy=j;
			if(a[i][j]=='T') ex=i,ey=j;
		}
	}
	bfs();
	return 0;
}
/*3 4
 YBEB
 EERE
 SSTE*/
