#include <bits/stdc++.h>
using namespace std;
int num, sum;
int main() {
	int m, n;
	cin >> m >> n;
	for (int i =m; i<=n; i++) {
		for (int j = 2; j<i; j++) {
			if (i%j==0) {
				num++;
			}
		}
		if (num==0) {
			sum++;
		}
		num=0;
	}
	if (m==1) {
		sum--;
	}
	cout << sum;
	return 0;
}
