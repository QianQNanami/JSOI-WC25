#include <bits/stdc++.h>
using namespace std;
int a[100000], ts[10000], sum;
int main() {
	int n, t;
	cin >> n>>t;
	for (int i =0; i<n; i++) {
		cin>>a[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=i; j>=1; j--) {
			if (a[i]>=a[j]) {
				for (int k =0; k<=j; k++) {
					int ts[k]=a[k];
					if (k==t) {
						t+=n;
						t--;
					}
				}
				for (int k=j+1; k<n; k++) {
					a[k-i+j]=a[k];
				}
			}
		}
	}
	for (int i=1; i<=t; i++) {
		sum++;
	}
	cout << sum;
	return 0;
}
