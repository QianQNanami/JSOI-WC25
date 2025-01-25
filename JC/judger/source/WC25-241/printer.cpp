#include<bits/stdc++.h>
using namespace std;
int a[10000005],b[10000005],x,n,t,cnt;
int main() {
	cin>>n>>t;
	t=t+1;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		b[i]=a[i];
	}
	x=a[t];
	for(int i=1; i<=n; i++) {
		if(a[i]==x) {
			cnt++;
		}
	}
	if(cnt==1) {
		int cn;
		for(int i=1;i<=n;i++){
			if(a[i]>=x){
				cn++;
			}
		}
		cout<<cn;
		return 0;
	}
	if(cnt>1) {
		bool flag=0,f2=1;
		int w;
		for(int i=1; i<=t; i++) {
			if(a[i]>x) {
				flag=1;
				w=i;
			}
		}
		for(int i=t; i<=n; i++) {
			if(a[i]>x) {
				f2=0;
			}
		}
		if(flag==1&&f2==1) {
			int cn;
			for(int i=1;i<=t;i++){
				if(a[i]<x){
					cn++;
				}
			}
			cout<<t-cn;
			return 0;
		} else {
			if(flag==1&&f2==0){
				int cn;
				for(int i=t; i<=n; i++) {
					if(a[i]>x) {
						cn++;
					}
				}
				cout<<cn+1;
				return 0;		
			}
		}
	}
	return 0;
}
