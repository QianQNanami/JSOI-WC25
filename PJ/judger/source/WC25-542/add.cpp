#include<bits/stdc++.h>
using namespace std;
const int N=  1e5+10;
unsigned long long a[N],b[N];
int n,m,x,y;
int main(){
	
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		b[i] = a[i]+b[i-1];
	}
	cin>>m;
	for(int i = 1;i<=m;i++){
	    cin>>x>>y;
		cout<<b[y]-b[x-1]<<"\n";	
	}
	return 0;
}
