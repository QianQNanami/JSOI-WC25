#include <bits/stdc++.h>
using namespace std;
int M,N,dstx,dsty;
char sth[300][300];

int bfs(int x, int y, int ans=0){
	/*if (sth[x][y]=='E') ans++;
	else if (sth[x][y]=='B') ans+=2;
	else if (sth[x][y]=='R'||sth[x][y]=='S') return INT_MAX;
	int a = bfs(x+1, y, ans);
	int b = bfs(x, y+1, ans);
	int c=INT_MAX, d=INT_MAX;
	if (y>=1) c = bfs(x, y-1, ans);
	if (x>=1) d = bfs(x-1, y, ans);
	if (sth[x][y] == 'Y'&&a==b&&b==c&&c==d&&d==INT_MAX) return -1;
	return min(a, min(b, min(c, d)));*/
	if (x==dstx&&y==dsty){
		cout << ans << endl;
		return 0;
	} else {
		char opt = sth[y][x];
		if (opt=='E') ans++;
		else if (opt=='B')  ans+=2;
		if (x<N&&(sth[y][x+1]!='R'||sth[y][x+1]!='S')) ans = min(ans, bfs(x+1, y, ans));
		if (y<M&&(sth[y+1][x]!='R'||sth[y+1][x]!='S')) ans = min(ans, bfs(x, y+1, ans));
		if (x>0&&(sth[y][x-1]!='R'||sth[y][x-1]!='S')) ans = min(ans, bfs(x-1, y, ans));
		if (y>0&&(sth[y-1][x]!='R'||sth[y-1][x]!='S')) ans = min(ans, bfs(x, y-1, ans));
	}
}

int main(void){
	int x, y;
	cin >> M >> N;
	//sth.resize(M);
	for (int i=0;i<M;++i){
		for (int j=0;j<N;++j){
			cin >> sth[i][j];
			if (sth[i][j] == 'Y'){
				x=j;y=i;
			} else if (sth[i][j] == 'T'){
				dstx=j;dsty=i;
			}
		}
		//sth[i].resize(N);
	}
	//bfs(x, y);
	cout << -1 << endl;
	return 0;
}
