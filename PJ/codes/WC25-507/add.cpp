#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1000005;
int n,m;
int q[N];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int s;
		cin>>s;
		q[i]=q[i-1]+s;
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<q[r]-q[l-1]<<endl;
	}
	return 0;
}
