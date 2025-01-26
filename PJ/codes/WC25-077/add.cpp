#include<bits/stdc++.h>
using namespace std;
int n,m,sum[1000005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sum[i];
		sum[i]+=sum[i-1];
	}
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl;
	}
}
