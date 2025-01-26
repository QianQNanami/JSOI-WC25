#include<bits/stdc++.h>
using namespace std;
bool pd(int y[]) {
	for(int i=1; i<=6; i++)
		if(y[i]!=0) return false;
	return true;
}
int main() {
	int sum=0,ans=0,l=0;
	int a[8];
	for(int i=1; i<=6; i++)
		a[i]=1;
	int k[70001];
	do {
		ans=0;
		for(int i=1; i<=6; i++) {
			cin>>a[i];
			ans+=a[i]*i*i;
		}
		if(pd(a)) break;
		if(ans%36!=0) {
			l++;
			k[l]=ans/36+1;
		} else {
			l++;
			k[l]=ans/36;
		}
	} while(!pd(a));
	for(int i=1; i<l; i++)
		cout<<k[i]<<endl;
	cout<<k[l];
	return 0;
}
