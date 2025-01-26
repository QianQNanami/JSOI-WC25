#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5;
ll n, m, x, y, a[N + 5], ans;
int main(){
	cin >> n;
	for(ll i = 1;i <= n;i++){
		cin >> a[i];
		a[i] += a[i - 1];
	}
	cin >> m;
	for(ll i = 1;i <= m;i++){
		cin >> x >> y;
		ans = a[y] - a[x - 1];
		cout << ans << endl;
	}
	return 0;
}
