#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],m,l[100010],r[100010],sum;
long long b[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) cin>>l[i]>>r[i];
	for(int i=1;i<=m;i++){
		int c=r[i]-l[i]+1;
		b[i]+=(a[r[i]]+a[l[i]])*c/2;
		cout<<b[i]<<endl;
	}
	return 0;
}

