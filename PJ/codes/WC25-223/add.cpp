#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100010],sum[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		cout<<sum[y]-sum[x-1]<<endl;
	}
	return 0;
}
