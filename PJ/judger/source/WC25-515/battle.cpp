#include <bits/stdc++.h>
using namespace std;
long long a[305][305],s=0,x2,y2,n,m,c=0;
int cx[5]={0,0,-1,0,1};
int cy[5]={0,1,0,-1,0};
int dfs(int x,int y,int s){
	if(x==x2 && y==y2){
		cout<<s;
		return 0;
	}
	a[x][y]=2;
	for(int i=1;i<=4;i++){
		int tx=x+cx[i];
		int ty=y+cy[i];
		if(tx>=1 && tx<=n && ty>=1 && ty<=m && a[x][y]!=2){
			if(a[tx][ty]==1) c++;
			dfs(tx,ty,s+1);	
		}
	}
	a[x][y]=0;
	dfs(x,y,s-1);
    cout<<"-1";
    return 0;
}
int main(){
	long long i,y,j,x1,y1;
	char c;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>c;
			if(c=='R' || c=='S') a[i][j]=2;
			if(c=='B') a[i][j]=1;
			if(c=='E') a[i][j]=0;
			if(c=='Y') x1=i,y1=j,a[i][j]=0;
			if(c=='T') x2=i,y2=j,a[i][j]=0;
		}
	}
	cout<<dfs(x1,x2,1)+c;
	return 0;
}
