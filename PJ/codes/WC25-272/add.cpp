#include<bits/stdc++.h>
using namespace std;
long long n,m,l,r,cnt;
long long a[100005];
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(long long i=1;i<=m;i++){
		cin>>l>>r;
		for(long long j=l;j<=r;j++){
			cnt+=a[j];
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}

