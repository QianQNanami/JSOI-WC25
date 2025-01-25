#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> q;
int n, ans = 0;
long long a[50005], b[50005];
int main(){
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		q.push(a[i]);
	}
	for(int i = 1; i <= n; i++){
		b[i] = q.top();
		q.pop();
	}
	memset(a, 0, sizeof(a));
	int maxn = 0;
	for(int i = 2; i <= n; i++){
		for(int j = i - 1; j >= 0; j--){
			if(b[i] <= b[j] / 2){
				a[i] = a[j] + 1;
				ans++;
				b[j] = -1;
				break;
			}
		}
	}
	printf("%d", ans);
	return 0;
}

