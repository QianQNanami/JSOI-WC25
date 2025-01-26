#include <bits/stdc++.h>
using namespace std;
long long a[100010];
long long l[100010], r[100010];
long long n,m;
void q(int x,int y){
	long long sum=0;
	for(long long i=x-1;i<y;i++){
		sum+=a[i];
	}
	cout<<sum<<'\n';
}
int main(){
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(long long i=0;i<m;i++){
		cin>>l[i]>>r[i];
		q(l[i],r[i]);
	}
	return 0;
}
