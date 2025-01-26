#include <bits/stdc++.h>
using namespace std;
int va[100005];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>va[i];
		va[i]=va[i]+va[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<va[r]-va[l-1]<<"\n";
	}
	return 0;
}
