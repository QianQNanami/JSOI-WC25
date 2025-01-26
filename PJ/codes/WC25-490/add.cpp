#include<bits/stdc++.h>
using namespace std;
const int N=100000+5;
int n,m;
long long a[N],b[N];
int main()
{
	cin>>n;
	cin>>a[1];
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<b[r]-b[l-1]<<endl;
	}
	return 0;
}

