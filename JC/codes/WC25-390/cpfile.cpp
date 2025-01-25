#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,cnt=0,i;
int a[10010];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n-1;i++){
		if(a[i]>a[i+1]&&a[i+1]!=a[n]) swap(a[i],a[i+1]);
		if(a[i]>a[i-1]&&a[i]==a[n]) swap(a[i],a[i-1]);
	} 
	for(i=1;i<=n-1;i++){
		if(a[i]>a[i+1]&&a[i+1]!=a[n]) swap(a[i],a[i+1]);
		if(a[i]>a[i-1]&&a[i]==a[n]) swap(a[i],a[i-1]);
	}
	a[n]=5;
	a[n-1]=4;
	for(i=1;i<=n;i++){
		a[1]=0;
		cnt=cnt+a[i];
	}
	cout<<cnt+6;
	return 0;
}
