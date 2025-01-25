#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,t,a[10000+10],b[10000+10],ans=0,f=0;
	cin>>n>>t;
	for(long long i=0; i<n; i++) {
		cin>>a[i];
		b[i]=i;
	}
	for(long long i=0; i<n; i++) {
		f=1;
		if(a[t]==0) break;
		else {
			for(long long k=0; k<n; k++) {
				if(a[i]<a[k]) {
					f=0;
				}
			}
		}
		if(f==1){
			a[i]=0;
			ans++;	
		} 
		else {
			a[n-1]=a[i];
	}
	

	}
	cout<<ans<<endl;
	return 0;
}
