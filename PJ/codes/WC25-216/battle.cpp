#include<bits/stdc++.h>
using namespace std;
int m,n,ans=INT_MAX,xy,yy;
char mapp[305][305];
bool vis[305][305];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int x,int y,int dep){
	if(mapp[x][y]=='T'){
		ans=min(ans,dep);
		return;
	}
	for(int i=0;i<4;i++){	
		int xn=mapp[x][y]+dir[i][0],yn=mapp[x][y]+dir[i][1];
		if(mapp[xn][yn]=='R'||mapp[xn][yn]=='S'||xn>n||xn<1||yn<1||yn>m||vis[xn][yn]) continue;
		if(mapp[xn][yn]=='B'){
			mapp[xn][yn]='E';		
			vis[xn][yn]=1;
			dfs(xn,yn,dep+2);
			vis[xn][yn]=0;
			mapp[xn][yn]='B';
		}
		else{
			vis[xn][yn]=1;
			dfs(xn,yn,dep+1);
			vis[xn][yn]=0;
		}
	}
	return;
}
int main(){
	scanf("%d%d",&m,&n);
	for(int j=1;j<=m;j++)
		for(int i=1;i<=n;i++)
			cin>>mapp[i][j];
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			if(mapp[i][j]=='Y'){	
				xy=i;
				yy=j;
				vis[i][j]=1;
				break;	
			} 
		}
	}
	dfs(xy,yy,0);	
	if(ans==INT_MAX) printf("-1\n");
	else printf("%d\n",ans);
	return 0;
}	
