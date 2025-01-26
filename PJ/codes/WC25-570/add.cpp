#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005];
int s[100005];
int main(){
	cin>>n>>a[1];
	s[1]=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		cout<<s[y]-s[x-1]<<"\n";
	}
	return 0;
}
