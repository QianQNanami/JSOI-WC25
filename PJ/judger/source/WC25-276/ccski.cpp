#include<bits/stdc++.h>
using namespace std;
const int maxn=505;
int n,m,a[maxn][maxn],b[maxn][maxn],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans=-1e9,t=1e9;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(b[i][j]==1){
				t=1e9;
				for(int k=0;k<4;k++){
					int nx=i+dx[k],ny=j+dy[k];
					if(!(nx>m||ny>n||nx<1||ny<1)) t=min(t,abs(a[nx][ny]-a[i][j]));
				}
				ans=max(ans,t);
			}
		}
	}cout<<ans;
	return 0;
}
/*3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
