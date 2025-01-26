#include<bits/stdc++.h>
using namespace std;
int a[10010],b[10010],n,n1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	cin>>n1;
	for(int i=1;i<=n1;i++){
		int x,y;
		cin>>x>>y;
		a[i]=b[y]-b[x-1];
	}
	for(int i=1;i<=n1;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}

