#include <iostream>
#define ll long long
using namespace std;
ll n, a[70005][10], cnt;
bool b[10][10];
int main() {
	bool flag;
	for (n = 1; ; n++) {
		flag = true;
		for (ll j = 1; j <= 6; j++) {
			cin >> a[n][j];
			if (a[n][j] != 0)
				flag = false;
		}
		if (flag) break;
	}
	n--;
	for (long long i = 1; i <= n; i++) {
		cnt = 0;
		while (true) {
			if (a[i][1] < 0) a[i][1] = 0;
			if (a[i][6] > 0) {
				a[i][6]--, cnt++;
				continue;
			}
			if (a[i][5] > 0) {
				a[i][5]--, a[i][1] -= 11,
				cnt++;
				continue;
			}
			if (a[i][4] > 0) {
				a[i][4]--, cnt++;
				if (a[i][2] >= 5) {
					a[i][2] -= 5;
					continue;
				}
				if (a[i][2] > 0) {
					a[i][2] = 0;
					a[i][1]
					 -= 20 - a[i][2] * 4;
					continue;
				}
				a[i][1] -= 20;
				continue;
			}
			if (a[i][3] > 0) {
				cnt++;
				if (a[i][3] >= 4) {
					a[i][3] -= 4;
					continue;
				}
				if (a[i][3] == 3) {
					a[i][3] = 0;
					if (a[i][2] > 0) {
						a[i][2]--,
						a[i][1] -= 5;
						continue;
					}
					a[i][1] -= 9;
					continue;
				}
				if (a[i][3] == 2) {
					a[i][3] = 0;
					if (a[i][2] >= 3) {
						a[i][2] -= 3,
						a[i][1] -= 6;
						continue;
					}
					a[i][1] -= 18
					- a[i][2] * 4;
					continue;
				}
				a[i][3] = 0;
				if (a[i][2] >= 5) {
					a[i][2] -= 5,
					a[i][1] -= 7;
					continue;
				}
				a[i][1] -= 27
				- a[i][2] * 4;
				continue;
			}
			if (a[i][2] > 0) {
				cnt++;
				if (a[i][2] >= 9) {
					a[i][2] -= 9;
					continue;
				}
				a[i][1] -= 36
				- 4 * a[i][2];
				continue;
			}
			if (a[i][1] > 0) {
				cnt++;
				a[i][1] -= 36;
				continue;
			}
			break;
		}
		cout << cnt << endl;
	}
	return 0;
}
