#include<bits/stdc++.h>
using namespace std;
int m,n,t;
const int MAX=333;
char x[MAX][MAX];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool vis[MAX][MAX];
int main(){
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		cin>>x[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
		if(x[i][j]=='R'||x[i][j]=='S')
		vis[i][j]=true;
		}
	}
	int a=1,b=1;
	vis[1][1]=true;
	for(int i=0;i<4;i++){
		int a1=a+dx[i],b1=b+dy[i];
		if(x[a1][b1]=='T'){
			printf("%d",t);
			return 0;
		}
		if(a1>1&&a1<=n&&b1>1&&b1<=n&&!vis[a1][b1]){
			vis[a1][b1]=true;
			if(x[a1][b1]=='B')t+=2;
			else if(x[a1][b1]=='E')
			t++;
			a=a1;
			b=b1;
		}
	}
	cout<<"-1";
	return 0;
}
