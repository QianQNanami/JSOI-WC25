#include<bits/stdc++.h>
using namespace std;
int n,m,c=INT_MAX;
char a[310][310];
int fx[5]={0,0,1,0,-1};
int fy[5]={0,1,0,-1,0};
void dfs(int x,int y,int step){
	if(a[x][y]=='T'){
		c=min(step,c);
		return;
	}
	char ch=a[x][y];
	a[x][y]='S';
	for(int i=1;i<=4;i++){
		int tx=x+fx[i];
		int ty=y+fy[i];
		if(a[tx][ty]!='S'&&a[tx][ty]!='R'&&tx<=m&&tx>=1&&ty<=n&&ty>=1){
			if(a[tx][ty]=='B')dfs(tx,ty,step+2);
			else dfs(tx,ty,step+1);
		}
	}
	a[x][y]=ch;
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='Y'){
				dfs(i,j,0);
				if(c==INT_MAX)cout<<-1;
				else cout<<c;
				return 0;
			}
		}
	}
}
