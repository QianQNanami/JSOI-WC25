#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,t,a[110],b[110],zt,ztb;
	cin>>n>>t;
	m=t;
	for(int i=1;i<=n;i++){
		cin>>b[i];
		a[i]=i-1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[j]>b[i]){
				zt=a[i];
				ztb=b[i];
				for(int k=i+1;k<=n;k++){
					a[k-1]=a[k];
					b[k-1]=b[k];
				}
				a[n]=zt;
				b[n]=ztb;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==m){
			cout<<i+1;
			break; 
		}
	}
	return 0;
} 
