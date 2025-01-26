#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n,m;
int l[100000],r[100000];
long long ans[100000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		ans[i]=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>l[i]>>r[i];
		for(int j=l[i]-1;j<r[i];j++){
			ans[i]+=a[j];}}
	for(int i=0;i<m;i++)
		cout<<ans[i]<<endl;
	return 0;
}
