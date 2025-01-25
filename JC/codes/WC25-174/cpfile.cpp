#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r;
	int k,s;
	int a[10001];
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
//	for(int i=1;i<=n;i++){
//	if(a[i]!=a[1]&&a[i]<a[i-1])k=a[i];a[i]=a[i-1];a[i-1]=k;
//	if(a[1]>a[2])s=a[1];a[1]=a[2];a[2]=s;
//	}
	for(int i=0;i<n;i++){
	if(i==1){
	a[i]=0;
	r=a[i];
	}
    r=r+a[i+1];
	}
	cout<<r;
	return 0;
}
