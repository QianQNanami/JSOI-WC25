#include<bits/stdc++.h>
using namespace std;
bool f[50005];
struct node {
	int num;
	double half;
}a[50005];

bool cmp(node x, node y) {
	return x.num < y.num;
}
int main() {
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i].num);
		a[i].half = a[i].num * 1.0 / 2;
	}
	int cnt = 0;
	sort(a + 1, a + 1 + n, cmp);
	int l = 1, r = n, m;
	while(l <= r) {
		m = (l + r) / 2;
		if (a[m].num <= a[n].half)
			l = m + 1;
		else
			r = m - 1; 
	}
	int x = n;
	for(int i = m; i >= 1; i--) {
		if(f[x] == 1)
			break;
		if(a[i].num <= a[x].half) {
			f[i] = 1;
			cnt++; 
			x--;
		}
	}
	printf("%lld", cnt);
	return 0;
}

