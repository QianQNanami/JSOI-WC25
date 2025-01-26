#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> sum(n,0);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		sum[i]=sum[i-1]+x;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<'\n'; 
	}
	return 0;
} 
