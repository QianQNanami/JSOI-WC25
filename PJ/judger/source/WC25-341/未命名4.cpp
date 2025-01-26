#include<bits/stdc++.h>
#define M 310
#define N 310
using namespace std;
const int dy[4] = {0,0,-1,1},dx[4] = {-1,1,0,0};
char a[M][N];
bool b[M][N];
int m,n;
int ans = INT_MAX;
void dfs(int x,int y,int cost){
	if(a[x][y] == 'T'){
		cout<<"*"<<endl;
		ans = min(cost+1,ans);
		return ;
	}
	else{
		for(int i=0;i<4;i++){
			int xx = x + dx[i];
			int yy = y + dy[i];
			cout<<"ready:"<<xx<<" "<<yy<<" "<<a[xx][yy]<<endl;
			if(!b[xx][yy] && a[xx][yy] == 'E' && xx >= 1 && xx <= m && yy >= 1 && yy <= n){
				cout<<"A:"<<xx<<" "<<yy<<endl;
				cost ++;
				b[xx][yy] = true;
				if(cost >= ans)
					return ;
				dfs(xx,yy,cost);
				b[xx][yy] = false;
			}
			else{
				if(!b[xx][yy] && a[xx][yy] == 'B' && xx >= 1 && xx <= m && yy >= 1 && yy <= n){
					cout<<"B:"<<xx<<" "<<yy<<endl;
					cost += 2;
					b[xx][yy] = true;
					if(cost >= ans)
						return ;
					dfs(xx,yy,cost);
					b[xx][yy] = false;
				}
			}
		}
	}
}
int main(){
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%c",&a[i][j]);
		}
	}
	dfs(1,1,1); 
	cout<<ans<<endl;
	return 0;
}
/*
3 4
YBEB
EERE
SSTE
*/

