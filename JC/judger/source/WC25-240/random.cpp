#include<bits/stdc++.h>
using namespace std;
int a[200005];
int q,n,c,x,y;
int ans=0;
int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	cin>>q;
	while(q--) {
		cin>>c;
		if(c==1) {
			cin>>x>>y;
			for(int i=0; i<n; i++) {
				if(a[i]==x) {
					for(int j=n; j>i; j--) {
						a[j+1]=a[j];
					}
					a[i+1]=y;
				}
			}
		}
		if(c==2) {
			cin>>x;
			for(int i=0; i<n; i++) {
				if(a[i]==x) {
					a[i]=-1;
					ans++;
				}
			}
		}
	}
	for(int i=0; i<n+ans; i++) {
		if(a[i]!=-1)cout<<a[i]<<" ";
	}
	return 0;
}
