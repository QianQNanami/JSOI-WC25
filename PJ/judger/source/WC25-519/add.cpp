#include <cstdio>
#define MAXN 100005
int main() {
	int n;
	scanf("%d",&n);
	long long a[MAXN],f[MAXN];
	for(int i = 1; i <= n; i++) {
		scanf("%lld",&a[i]);
	}
	f[0] = 0;
	for(int i = 1; i <= n; i++) {
		f[i] = f[i - 1] + a[i];
	}
	int m;
	scanf("%d",&m);
	int l,r;
	for(int i = 1; i <= m; i++) {
		scanf("%d%d",&l,&r);
		printf("%lld\n",f[r] - f[l - 1]);
	}
	return 0;
}
