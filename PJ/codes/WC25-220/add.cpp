#include<bits/stdc++.h>
using namespace std;
int n,m,l[10010],r[10010];
long long a[10010],d[10010]={0},ans[10010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)d[i]=a[i]+d[i-1];
	cin>>m;
	for(int i=1;i<=m;i++)cin>>l[i]>>r[i];
	for(int i=1;i<=m;i++)ans[i]=d[r[i]]-d[l[i]-1];	
	for(int i=1;i<=m;i++)cout<<ans[i]<<endl;
	return 0;
}
