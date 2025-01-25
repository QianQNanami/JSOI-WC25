#include<bits/stdc++.h>
using namespace std;
int n,a[402][402],ans;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
	for(int i=1;i<=n;i++){
		ans+=a[i][i];
		ans-=a[n-i+1][i];
	}
	cout<<ans;
}
