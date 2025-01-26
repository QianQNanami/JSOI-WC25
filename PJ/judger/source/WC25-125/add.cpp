#include<bits/stdc++.h>
using namespace std;
int a[100005],s[100005],n,m,l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],s[i]=s[i-1]+a[i];
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
