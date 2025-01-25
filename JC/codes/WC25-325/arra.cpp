#include <bits/stdc++.h>
using namespace std;
int a1, a2, num, sum1, sum2, sum;
void nb(int x, int y, int k) {
	for (int i =1; i<x; i++) {
		if (i-x+i==k||x-i-i==k) {
			x=i;
			y=x-i;
			if (x-k<2) {
				num++;
			}
			if (y-k<2) {
				num++;
			}
		} else {
			sum1++;
		}
	}
	if (sum1==x-1) {
		num++;
	}
	for (int i =1; i<y; i++) {
		if (i-y+i==k||y-i-i==k) {
			x=i;
			y=y-i;
			if (y-k<2) {
				num++;
			}
			if (x-k<2) {
				num++;
			}
		} else {
			sum2++;
		}
	}
	if (sum2==y-1) {
		num++;
	}
	cout << num;
}
int main() {
	int n, k;
	cin >> n >> k;
	for (int i =1; i<n; i++) {
		if (i-n+i==k||n-i-i==k) {
			a1=i;
			a2=n-i;
		} else {
			sum++;
		}
	}
	if (sum==n-1) {
		num++;
	}
	nb(a1, a2, k);
	return 0;
}
