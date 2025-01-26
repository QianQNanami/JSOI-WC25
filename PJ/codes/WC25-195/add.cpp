#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[100001],s[100001],l[100001],r[100001];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) {
	cin>>a[i];
	s[i]=s[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)cin>>l[i]>>r[i];
	for(int i=1;i<=m;i++) cout<<s[r[i]]-s[l[i]]+a[l[i]]<<endl;
	return 0;
}
