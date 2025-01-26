#include<bits/stdc++.h>
using namespace std;
long long  b[10001];
long long  d[10001];
int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	b[1]=x;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
	    b[i]=a;
	    b[i]=b[i]+b[i-1];
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int x;
		int y;
		cin>>x>>y;
		long long c=b[y]-b[x-1];
		d[i]=c;
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<endl;
	}
	return 0;
	
}
