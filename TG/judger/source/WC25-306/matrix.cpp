#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=450;
int n,a[MAXN][MAXN],sum1=-9999,sum2=-9999,sum3=-9999,sum4=-9999,ans;
int d1,d2,d3,d4;
void dfs1(int x,int y){
	if(x==n+1 and y==n+1){
		return;
	}
	d1+=a[x][y];
	int tot=0;
	for(int i=1,j=x;i<=x,j>=1;i++,j--){
			tot+=a[i][j];
	}
	sum1=max(sum1,d1-tot);
	dfs1(x+1,y+1);
}
void dfs2(int x,int y){
	if(x==n+1 and y==0){
		return;
	}
	d2+=a[x][y];
	int tot=0;
	for(int i=1,j=y;i<=x,j<=n;i++,j++){
			tot+=a[i][j];
	}
	sum2=max(sum2,tot-d2);
	dfs2(x+1,y-1);
}
void dfs3(int x,int y){
	if(x==0 and y==n+1){
		return;
	}
	d3+=a[x][y];
	int tot=0;
	for(int i=x,j=1;i<=n,j<=y;i++,j++){
			tot+=a[i][j];
	}
	sum3=max(sum3,tot-d3);
	dfs3(x-1,y+1);
}
void dfs4(int x,int y){
	if(x==0 and y==0){
		return;
	}
	d4+=a[x][y];
	int tot=0;
	for(int i=x,j=n;i<=n,j>=x;i++,j--){
			tot+=a[i][j];
	}
	sum4=max(sum4,d4-tot);
	dfs4(x-1,y-1);
}
signed main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	d1=a[1][1],d2=a[1][n],d3=a[n][1],d4=a[n][n];
	dfs1(2,2);
	dfs2(2,n-1);
	dfs3(n-1,2);
	dfs4(n-1,n-1);
	ans=max(max(sum1,sum2),max(sum3,sum4));
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
