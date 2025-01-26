#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};
int a[501][501],b[501][501];
int n,m,sum=INT_MAX,k;
void bfs(){
	int o=0;
	for(int c=2;c<=k;c++){
	    for(int i=1;i<=m;i++){
		    for(int j=1;i<=n;i++){
			    if(b[i][j]==1){
			    	cout<<21<<endl;
				}
		    }
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
			if(b[i][j]==1){
				k++;
			}
		}
	}
	bfs();
	cout<<sum<<endl;
	return 0;
}
