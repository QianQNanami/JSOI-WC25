#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],b[1000],c[1000],mina=10000000,m,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[j]<mina){
				mina=a[j];
				m=j;
			}
		}
		a[m]=10000010;
		b[i]=mina;
		mina=10000000;
	}
	for(int i=1;i<=n;i++){
		c[i]=b[i];
	}
	b[1]=0;
	for(int i=2;i<=n;i++){
		b[i]=c[i-1]+b[i-1];
	}
	for(int i=1;i<=n;i++){
		s=s+b[i];
	}
	cout<<s;
	return 0;
}
