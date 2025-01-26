#include<bits/stdc++.h>
using namespace std;
int n,m,x1,y1,_time=1;
char a[300][300];
int dx[4]={1,-1,0,0},dy={0,0,1,-1};
int dp[90000][3];
int main(){
	cin >>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >>a[i][j];
			if(a[i][j]=='Y'){
				x1=i;
				y1=j;
			}
		}
	}
	int front=1;
	int rear=1;
	dp[0][0]=x1;
	dp[0][1]=y1;
	dp[0][2]=1;
	while(front<=rear){
		for(int i=0;i<4;i++){
			dp[front][0]=dp[front-1][0]+dx[i];
			dp[front][1]=dp[front-1][1]+dy[i];
			if(dp[front][0]>=1&&dp[front][1]>=1&&dp[front][0]<n&&dp[front][1]<m&&a[dp[front][0]][dp[front][1]]!='R'&&a[dp[front][0]][dp[front][1]]!='S'){
				if(a[dp[front][0]][dp[front][1]]=='B'){
					_time++;
					a[dp[front][0]][dp[front][1]]='E';
				}
				if(a[dp[front][0]][dp[front][1]]=='E'){
					_time++;
				}
				if(a[dp[front][0]][dp[front][1]]=='T'){
					cout<<_time-1;
				}
				rear++;
			} 
		} 
		front++;
	}
	return 0;
}

