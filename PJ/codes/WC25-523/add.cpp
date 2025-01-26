#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
long long n,m,a[N+10],l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<"\n";
	}
	return 0;
}
