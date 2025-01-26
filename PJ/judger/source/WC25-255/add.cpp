#include<bits/stdc++.h>
using namespace std;
long long a[100005],d[100005],x[10005],y[100005];
int main(){
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		d[i]=d[i-1]+a[i];
	}
	long long m;
	cin>>m;
	for(long long i=1;i<=m;i++){
		cin>>x[i]>>y[i];
	}
	for(long long i=1;i<=m;i++){
		cout<<d[y[i]]-d[x[i]-1]<<endl;
	}
	return 0;
}
