#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=0,t=0,a[10001],b[10001];
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	a[n]=10e9;
	while(1){
		for(int i=0;i<n;i++){
			if(a[i]>a[i+1]){
				swap(a[i],a[i+1]);
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]<a[i+1]){
				sum=10;
			}
		}
		if(sum=10){
			break;
		}
	}
	sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			sum+=a[j];
		}
		b[i]=sum;
		sum=0;
	}
	for(int i=1;i<=n;i++){
		sum+=b[i];
	}
	cout<<sum;
	return 0;
}
