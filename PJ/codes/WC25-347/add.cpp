#include <bits/stdc++.h>
using namespace std;
int main (){
	int n , m;
	long long a[100005] , f[100005];
	scanf("%d" , &n);
	for (int i = 1;i <= n;i ++){
		scanf("%lld" , &a[i]);
		f[i] = f[i - 1] + a[i];
	}
	scanf("%d" , &m);
	while (m --){
		int l , r;
		scanf("%d%d" , &l , &r);
		long long ans = f[r] - f[l - 1];
		printf ("%lld" , ans);
	}
	return 0;
}

