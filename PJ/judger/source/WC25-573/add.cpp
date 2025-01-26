#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
long long a[maxn],sum[maxn];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
	return 0;
}

