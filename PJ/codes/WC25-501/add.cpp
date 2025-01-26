#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],b[100001],m,ai,aj;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[i]=b[i-1]+a[i];
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&ai,&aj);
		printf("%d\n",b[aj]-b[ai-1]);
	}
	return 0;
}
