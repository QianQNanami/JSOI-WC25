#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int t=0;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n; i++) {
		for(int j=i; j<=n; j++) {
			if(a[i]>a[j])swap(a[i],a[j]);

		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=i-1; j>=1; j--) {
			t+=a[j];
		}
	}
	cout<<t<<endl;
	return 0;
}
