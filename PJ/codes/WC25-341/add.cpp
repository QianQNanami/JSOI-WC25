#include<bits/stdc++.h>
#define T 100010
using namespace std;
int n,m;
long long int a[T];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		a[i] += a[i-1];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%lld",a[r] - a[l-1]);
	}
	return 0;
}
