#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[10001];
	int m;
	int l[10001],r[10001];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++){
		int cnt=0;
		for(int j=l[i];j<=r[i];j++){
			cnt+=a[j];
		}
		cout<<cnt<<endl;
	}
	return 0;
} 
