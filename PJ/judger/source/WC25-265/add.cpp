#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	vector<int>sl(n);
	for(int u=0;u<n;u++)
	cin>>sl[u];
	cin>>m;
	vector<int>l(m);
	vector<int>r(m);
	vector<int>ans(m);
	for(int u=0;u<m;u++){
		cin>>l[u]>>r[u];
		ans[u]=0;
	}
	for(int u=0;u<m;u++){
		for(int j=l[u]-1;j<r[u];j++){
			ans[u]+=sl[j];
		}
		cout<<ans[u]<<endl;
	}
	return 0;
}
