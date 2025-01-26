#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100010],s[100010];
int main(){
	cin>>n;
	cin>>a[1];
	s[1]=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	cin>>m;
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		cout<<s[y]-s[x-1]<<endl;
	}
	
	
	
	return 0;
}
