#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,minn=INT_MAX,maxx=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>x;
			minn=min(x,minn);
			maxx=max(maxx,x);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>x;
		}
	}
	cout<<maxx-minn;
	return 0;
}
