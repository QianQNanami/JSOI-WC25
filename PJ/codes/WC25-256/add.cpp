#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[100010], b[100010], c[100010];
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	b[1] = a[1];
	for(int i = 2; i <= n; i++){
		b[i] = b[i - 1] + a[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		cout << b[y] - b[x - 1] << endl;
	}
	return 0;
}
