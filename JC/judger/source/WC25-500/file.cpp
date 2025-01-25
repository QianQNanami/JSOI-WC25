#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[100*100+5],n,t,k,b[1000*10+5];
	long long s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	} 
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=2;i<=n;i++){
		k=a[i];
		for(int j=1;j<i;j++) {
			a[i]=a[i]+b[j];
		}
		s+=a[i]-k;
	}
	cout<<s<<endl;
	return 0;
}
