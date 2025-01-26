#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[100005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	int l,r;	 
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		int sum=0;
		for(int j=l;j<=r;j++){
			sum+=a[j];
		}
		cout<<sum<<"\n";
	}
	return 0;
}
