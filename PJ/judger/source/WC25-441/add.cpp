#include<bits/stdc++.h>
using namespace std;
int a[10001];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) {
		int s=0;
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++) 
			s+=a[j];
		cout<<s<<endl;
	}
	return 0;
}

