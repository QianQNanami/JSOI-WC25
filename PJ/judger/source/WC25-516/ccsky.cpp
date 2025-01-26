#include<bits/stdc++.h>  
using namespace std;
int a[1010][1010],c[1010][1010];
int main(){
	int n,m,maxn=-1,minn=INT_MAX;
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];	
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>c[i][j];	
			if(c[i][j]){
				if(a[i][j]>maxn){
					maxn=a[i][j];
				}
				if(a[i][j]<minn){
					minn=a[i][j];
				}
			}
		}
	}	
	cout<<maxn-minn<<endl;
	return 0;
	
}
