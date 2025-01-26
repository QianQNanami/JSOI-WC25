#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int p[N];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	p[1]=a[1];
	for(int i=2;i<=n;i++){
		p[i]=p[i-1]+a[i];
	}
	int m;
	cin>>m;
	while(m--){
		int a,b;
		cin>>a>>b;
		cout<<p[b]-p[a-1]<<endl;
	}
	return 0;
}

