#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,m,x,y;
	cin >> n;
	long long a[n+1],b[n+1] = {0};
	for(int i = 1;i<=n;i++)  cin >> a[i], b[i] = b[i-1] + a[i];
	cin >> m;
	for(int i = 0;i<m;i++) {
		cin >> x >> y;
		cout << b[y] - b[x-1]  << endl;
	}
	return 0;
}
