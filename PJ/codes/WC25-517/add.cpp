#include <bits/stdc++.h>
using namespace std;
#define int long long 
int a[100010],p[100010];
struct qj{
	int start,finish,s;
}b[100010];
signed main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[i]=a[i]+p[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>b[i].start>>b[i].finish;
	}
	for(int i=1;i<=n;i++){
		b[i].s=p[b[i].finish]-p[b[i].start-1];
	}
	for(int i=1;i<=m;i++){
		cout<<b[i].s<<endl;
	}
	return 0;
}
