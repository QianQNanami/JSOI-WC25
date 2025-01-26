#include <bits/stdc++.h>
using namespace std;
int n,m,a[100005];
int ask(int l,int r){
	int sum=0;
	for(int k=l;k<=r;k++){
		sum+=a[k];
	}
	return sum;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<ask(l,r)<<'\n';
	}
}

