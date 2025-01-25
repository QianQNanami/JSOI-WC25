#include <bits/stdc++.h>
using namespace std;
int a[100005];
int sum=0,ans=0;
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	for(int i=1; i<=n; i++) {
		for(int j=i+1; j<=n; j++) {
			if(a[i]>a[j]) {
				sum=a[i];
				a[i]=a[j];
				a[j]=sum;
			}
		}
	}
	for(int i=1; i<=n; i++) {
		for(int j=i-1; j>=1; j--) {
			ans+=a[j];
		}
	}
	cout<<ans;
	return 0;
}
