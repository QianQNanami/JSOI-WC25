#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005],l[10005],r[10005];
int main(){
	int n;
	int m;
	cin>>n;
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

