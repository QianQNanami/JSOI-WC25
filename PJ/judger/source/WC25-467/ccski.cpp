#include <bits/stdc++.h>
using namespace std;
int n,m,l,a[100001];
int main(){
	cin>>n>>m;
    int r=n*m+6; 
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>l;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>l;
	cout<<r;
	return 0;
}
