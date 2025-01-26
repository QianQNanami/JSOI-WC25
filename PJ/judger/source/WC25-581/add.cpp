#include <bits/stdc++.h>
using namespace std;
int a[10005];
int n,m,l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		int sum=0;
		for(int i=l;i<=r;i++){
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
} 
