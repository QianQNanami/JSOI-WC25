#include<bits/stdc++.h>
#define int long long 
using namespace std;  
const int N=10000000;         
int a[N+5],p[N+5]={0},s[N+5];
int n,m,i,l,r,j;
signed main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		p[i]=p[i-1]+a[i];
	}
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>l>>r;
		s[i]=p[r]-p[l-1];	
	}
	for(i=1;i<=m;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}                      
