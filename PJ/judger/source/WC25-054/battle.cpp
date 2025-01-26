#include<bits/stdc++.h>
using namespace std;
#define int long long
//李若琪是傻逼  
//李若琪是傻逼  
//李若琪是傻逼  
//李若琪是傻逼  
//李若琪是傻逼  
int dx[5] = {0,1,0,-1,0};
int dy[5] = {0,0,1,0,-1};
int n,m;
int mp[305][305] = {0};
int vis[305][305] = {0};
int sx,sy;
queue<int> qx,qy,qcnt;
bool check(int x,int y){
	if(x < 1 || x > m || y < 1 || y > n ) return false;
	if(mp[y][x] == 0) return false;
	if(vis[y][x] == 1) return false;
	return true;
}
//int bfs(int x,int y){
//	qx.push(x);
//	qy.push(y);
//	qcnt.push(0);
//	while(!qx.empty() && !qy.empty() && !qcnt.empty()){
//		int tx = qx.front();
//		int ty = qy.front();
//		for(int i = 1;i <= 4;i++){
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			int ccnt = qcnt.front();
//			if(check(nx,ny)) continue;
//			cout<<nx<<" "<<ny<<endl;
//			if(mp[nx][ny] == 1){
//				vis[nx][ny] = 1;
//				qx.push(nx);qy.push(ny);
//				qcnt.push(ccnt+1);
//			} 
//			if(mp[nx][ny] == 2){//破坏砖墙  
//				qx.push(tx);qy.push(ty);
//				qcnt.push(ccnt+1);
//				mp[nx][ny] = 1;
//			}
//			if(mp[nx][ny] == 114514){
//				return qcnt.front()+1;
//			}
//		}
//		qx.pop();qy.pop();qcnt.pop();
//	}
//	return -1;
//}
int bfs(int x,int y){
	qx.push(x);
	qy.push(y);qcnt.push(0);//初始化
	while(!qx.empty() && !qy.empty() && !qcnt.empty()){
		int xx = qx.front();int yy = qy.front(); int cnt = qcnt.front();
		for(int i = 1;i <= 4;i++){
			int nx = xx+dx[i];
			int ny = yy+dy[i];
			if(check(nx,ny)){
				if(mp[ny][nx] == 1){
					vis[ny][nx] = 1;
					qx.push(nx);qy.push(ny);
					qcnt.push(cnt+1);
				}
				if(mp[ny][nx] == 2){
					mp[ny][nx] = 1;
					qx.push(xx);qy.push(yy);
					qcnt.push(cnt+1);
				}
				if(mp[ny][nx] == 114514){
					return cnt+1;
				}
			}
		}
		qx.pop();
		qy.pop();
		qcnt.pop();
	}
	return -1;
}
signed main(){
	cin>>n>>m;//n表示 列，m表示 行 
	char tmp;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin>>tmp;
			if(tmp == 'E'){
				mp[i][j] = 1;
			}
			if(tmp == 'S' || tmp == 'R'){
				mp[i][j] = 0;
			}
			if(tmp == 'B'){
				mp[i][j] = 2;
			}
			if(tmp == 'Y'){
				mp[i][j] = 114514;
			}
			if(tmp == 'T'){
				mp[i][j] = 1;
				sx = j;
				sy = i;
				vis[i][j] = 1;
			}
		}
	}
	cout<<bfs(sx,sy);
	return 0;
	/*
3 4
YBEB
EERE
SSTE
	*/
	/*
4 4
YESS
EBSS
EEBE
BEET

	*/
}


//李瑞琪我草拟吗 
