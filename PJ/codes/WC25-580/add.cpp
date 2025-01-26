#include<bits/stdc++.h>
using namespace std;
int n,m,r,l,a[10005];
long long s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>r>>l;
		for(int j=r;j<=l;j++){
			s+=a[j];
		}
		cout<<s<<endl;
		s=0;
	}
	return 0;
}
