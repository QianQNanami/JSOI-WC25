#include<bits/stdc++.h>
using namespace std;
const int N=510;
int a[N][N];
int b[N][N];
int c[N][N];
int e[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int num;
int ans;
int sx[N],sy[N];
int sp=0;
int nx,ny;
int m,n;



void f(int x,int y,int d){
	
	if(x<=0||y<=0||x>m||y>n){
		return ;
	}
	if(d>num){
		return ;
	}
	//cout<<x<<" "<<y<<endl;
	if(x==nx&&y==ny){
		//cout<<d<<endl;
		//cout<<d<<endl;
		num=min(num,d);
		return ;
	}
	for(int i=0;i<4;i++){
		int tx=x+e[i][0];
		int ty=y+e[i][1];
		if(!c[tx][ty]){
			c[tx][ty]=true;
			f(tx,ty,max(d,abs(a[x][y]-a[tx][ty])));
			
			c[tx][ty]=false;
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(b[i][j]){
				sx[++sp]=i;
				sy[sp]=j;
			}
		}
	}
	for(int i=1;i<=sp;i++){
		for(int j=i+1;j<=sp;j++){
			num=1e9;
			nx=sx[j];
			ny=sy[j];
			c[sx[i]][sy[i]]=true;
			f(sx[i],sy[i],0);
			c[sx[i]][sy[i]]=true;
			ans=max(ans,num);
			//cout<<num<<endl;
			
		}
	}
	cout<<ans;
	return 0;
}
