#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,k;
long long a[100005];
long long b[100005];
int qujian(int x,int y){
	int ans=0;
	for (int i=x;i<=y;i++)
		ans+=a[i];
	return ans;
}
signed main(){
	cin>>n;
	k=1;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for (int i=1;i<=m;i++){
		cin>>l>>r;
		b[k++]=qujian(l,r);
	}
	for (int i=1;i<k;i++)
		cout<<b[i]<<endl;
	return 0;
}
