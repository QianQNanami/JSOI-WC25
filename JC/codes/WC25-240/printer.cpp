#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[10005],b[10005];
int x,ti=0;
int main() {
	cin>>n>>t;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		b[i]=i;
	}
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<=n; j++) {
			if(a[j]>a[i]) {
				x=a[i];
				for(int l=i; l<=n; l++) {
					a[l]=a[l+1];
					b[l]=b[l+1];
				}
				a[n-1]=x;
				b[n-1]=b[i];
				break;
			}
			if(j==n&&a[j]<=a[i]) {
				
				for(int l=i; l<=n; l++) {
					a[l]=a[l+1];
					b[l]=b[l+1];
				}
				n--;
				ti++;
				if(b[i]==t)cout<<ti;
			}
		}
	}
	return 0;
}
