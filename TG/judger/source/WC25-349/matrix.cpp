#include<bits/stdc++.h>
using namespace std;
int n,a[405][405];
struct node{
	int x,y;
}s;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int ans=INT_MIN;
	for(int i=2;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i;k<=n;k++){
				int kan=0;
				for(s.x=j,s.y=k;s.x>j-i&&s.y>k-i;s.x--,s.y--){
					kan+=a[s.x][s.y];
				}
				for(s.x=j,s.y=k-i+1;s.x>j-i&&s.y<=k;s.x--,s.y++){
					kan-=a[s.x][s.y];
				}
				ans=max(ans,kan);
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
