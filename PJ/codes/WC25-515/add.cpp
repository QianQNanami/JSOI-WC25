#include <bits/stdc++.h>
using namespace std;
long long a[100005];
long long he(int x,int y){
	int s=0;
	for(long long i=x;i<=y;i++){
		s=s+a[i];
	}
	return s;
}
int main(){
	long long n,m,x,y;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(long long i=1;i<=m;i++){
		cin>>x>>y;
		cout<<he(x,y);
	}
	return 0;
}
