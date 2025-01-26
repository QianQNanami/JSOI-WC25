#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000005];
int n,m;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		int sum=0;
		for(int j=l;j<=r;j++){
			sum+=a[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}
