#include <bits/stdc++.h>
using namespace std;
long long a[100001][2], b[100001];
int main(){
	int m, n, x, y;
	cin >> n;
	for (int i = 1;i <= n;i ++){
		cin >> a[i][0];
		a[i][1] = a[i][0] + a[i - 1][1];
	}
	cin >> m;
	for (int i = 1;i <= m;i ++){
		cin >> x >> y;
		b[i] = a[y][1] - a[x - 1][1];
	}
	for (int i = 1;i <= m;i ++){
		cout << b[i];
		if (i < m) cout << endl;
	}
	return 0;
}

