#include<bits/stdc++.h>
using namespace std;
int dx[10]={1,-1,0,0},dy[10]={0,0,1,-1};
int n,m;
char a[310][310];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	return 0;
}

