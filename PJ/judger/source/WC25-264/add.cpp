#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100001],b[100001],l[100001],r[100001];
int main(){
	cin>>n;
	b[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		b[i]=b[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++){
		cout<<b[r[i]]-b[l[i]-1]<<endl;
	}
	return 0;
} 
