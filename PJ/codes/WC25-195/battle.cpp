#include<bits/stdc++.h>
using namespace std;
int n,m,x1,y1,x,y,ans;
char a[301][301];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) {
			cin>>a[i][j];
			if(a[i][j]=='T'){
			 	x1=i;
			 	y1=j;
			}
		}
	cout<<"-1";
	retrun 0;
}
