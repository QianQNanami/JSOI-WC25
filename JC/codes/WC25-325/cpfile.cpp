#include <bits/stdc++.h>
using namespace std;
int a[100000], ts, sum;
int main() {
	int n;
	cin >> n;
	for (int i =1; i<=n; i++) {
		cin>>a[i];
	}
	for (int i=1; i<=n; i++) {
		for (int j=i; j>=1; j--) {
			if (a[i]<=a[j]) {
				int ts=a[i];
				for (int k =j; k<i; k++) {
					a[k+1]=a[k];
				}
				a[j]=ts;
			}
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
			sum+=a[j];
		}
	}
	cout << sum;
	return 0;
}
