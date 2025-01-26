#include<bits/stdc++.h>
#define M 510
#define N 510
using namespace std;
const int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
int m,n;
int a[M][N];
bool flag[M][N];
bool b[M][N];
int num;
int ans = INT_MAX;
void dfs(int x,int y,int sum,int dep,int cha){
	if(sum == num){
		cout<<"*"<<endl;
		ans = min(ans, cha);
		cout<<ans<<endl;
		return ;
	}
	else{
		for(int i=0;i<4;i++){
			int xx = x + dx[i];
			int yy = y + dy[i];
			
			if(xx >= 1 && xx <= m && yy >= 1 && yy <= n && !b[xx][yy]){
				//cout<<xx<<" "<<yy<<endl;
				cha = max(cha, abs(a[xx][yy] - a[x][y]));
				if(cha >= ans)
					return ;
				if(flag[xx][yy] == true)
					sum++;
				b[xx][yy] = true;
				dfs(xx,yy,sum,dep+1,cha);
				b[xx][yy] = false;
			}
			else continue;
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>flag[i][j];
			num += int(flag[i][j]);
		}
	}
	dfs(1,1,0,1,INT_MIN);
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
