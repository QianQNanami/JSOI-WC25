#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

long long n, m, a[N], x, y;

int main()
{
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		a[i] += a[i - 1];
	}
	cin >> m; 
	for(int i = 1;i <= m;i++){
		cin >> x >> y;
		cout << a[y] - a[x - 1] << endl;
	}
	
	return 0;
}
