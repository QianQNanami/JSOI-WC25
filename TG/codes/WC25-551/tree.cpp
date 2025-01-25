#include <bits/stdc++.h>
using namespace std;
int v[100005],p[100005];
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++) {
		cin>>v[i]>>p[i];
		sum+=v[i];
	}
	int ans=0;
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(v[i]*3==sum&&v[j]*3==sum) ans++;
		}
	}
	cout<<ans;
	return 0;
}
