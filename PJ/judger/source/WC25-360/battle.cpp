#include<bits/stdc++.h>
using namespace std;
int add[100001],n,m,a,b,sum,Tx,Ty,Yx,Yy,Yx_st[1001],Yy_st[1001],ta=1,z,x,y;
int map1[301][301];


int main(){
	//freopen("".in,r,stdin)
	//freopen("".out,w,stdout)
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>z;
			if(z=='E'){
				map1[i][j]=1;
			}
			if(z=='B'){
				map1[i][j]=2;
			}
			if(z=='S'){
				map1[i][j]=3;
			}
			if(z=='R'){
				map1[i][j]=4;
			}
			if(z=='T'){
				map1[i][j]=5;
			}
			if(z=='Y'){
				map1[i][j]=6;
			}
			if(map1[i][j]==5){
				Tx=i;
				Ty=j;
			}
			if(map1[i][j]==6){
				Yx_st[ta]=i;
				Yy_st[ta]=j;
				ta++;
				Yx=i;
				Yy=j;
			}
		}		
	}
}
	void dfs(x,y)
	{
		if(map1[x][y]!=0&&map1[x][y]!=3&&map1[x][y]!=4){
			x-=1;
			if(map1[x][y]==2){
				sum+=2
			}
			else{
				sum++;
			}
			dfs(x+1,y);
			dfs(x-1,y);
			dfs(x,y+1);
			dfs(x,y-1);
		}
	}
	while(Tx==Yx&&TY==Yy){
		dfs(Yx+1,Yy);
		dfs(Yx-1,Yy);
		dfs(Yx,Yy+1);
		dfs(Yx,Yy-1);
		sum=0;
	}
	cout<<sum;
	return 0;
}
