#include <iostream>
using namespace std;
int t, x[1005], k[1005][20];
int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> x[i];
		for (int j = 1; j <= x[i]; j++) {
			cin >> k[i][j];
		}
	}
	cout << -1;
	return 0;
}
