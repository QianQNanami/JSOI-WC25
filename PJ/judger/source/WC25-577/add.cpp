#include<bits/stdc++.h>
using namespace std;
long long a[1000010],sum[1000010];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		cout<<sum[b]-sum[a-1]<<endl;
	}
	return 0;
}
