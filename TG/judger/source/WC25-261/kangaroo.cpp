#include<bits/stdc++.h>
using namespace std;
int a[50010],v[50010],n,ans;
bool check(int x){
	for(int i=x;i>=1;--i){
		if(a[n-x+i]<a[i]*2)return false;
	}
	return true;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int l=0,r=n/2;
	while(l<r){
		int mid=((l+r)>>1)+1;
		if(check(mid))l=mid;
		else r=mid-1;
	}
	cout<<r<<endl;
	return 0;
}

