#include<bits/stdc++.h>
using namespace std;
int n,a[100010],m,l,r,ans[10010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>l>>r;
		for(int j=l;j<=r;j++){
			ans[i]+=a[j];
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
