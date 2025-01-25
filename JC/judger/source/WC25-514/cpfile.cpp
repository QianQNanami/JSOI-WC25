#include<bits/stdc++.h>
using namespace std;
int a[101],b[101];
int main(){
	int n,i,j,s=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(i=2;i<=n;i++){
		for(j=1;j<i;j++){
			b[i]=b[i]+a[j];
		}
		s=s+b[i];
	}
	cout<<s<<endl;
	
	return 0;
}
