#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[510][510],b[510][510];
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
		}
	}
	int maxx=INT_MIN;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==1){
				int ans1=INT_MAX,ans2=INT_MAX,ans3=INT_MAX,ans4=INT_MAX,ans5=0;
				if(j-1>0){
					ans1=abs(a[i][j]-a[i][j-1]);
				}
				if(j+1<=n){
					ans2=abs(a[i][j]-a[i][j+1]);
				}
				if(i-1>0){
					ans3=abs(a[i][j]-a[i-1][j]);
				}
				if(i+1<=m){
					ans4=abs(a[i][j]-a[i+1][j]);
				}
				ans5=min(min(ans1,ans2),min(ans3,ans4));
				maxx=max(maxx,ans5);
			}
		}
	}
	cout<<maxx;
	return 0;
} 
