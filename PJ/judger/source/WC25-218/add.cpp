#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100010],l,r,f[100010];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		f[i]=f[i-1]+a[i];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",f[r]-f[l-1]);
	}
	return 0;
}
