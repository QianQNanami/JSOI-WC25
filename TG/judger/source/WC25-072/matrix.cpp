#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		} 
	}
	int x=1,y=1,ans=0,ans1=0;
	while (x<=n&&y<=n){
		ans+=a[x][y];
		x++;y++;
	}
	
	x=1,y=n;
	while (x<=n&&y>=1){
		
		ans1+=a[x][y];
		x++;y--;
		
	}
	cout<<ans-ans1; 


	return 0; 
} 


