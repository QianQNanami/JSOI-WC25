#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int m;
	cin>>m;
	int b[m+1][3];
	for(int i=1;i<=m;i++)
	for(int j=1;j<=2;j++) cin>>b[i][j];
	long long ans[m+1]={0};
	for(int i=1;i<=m;i++)
	for(int j=b[i][1];j<=b[i][2];j++) ans[i]=ans[i]+a[j];
	for(int i=1;i<=m;i++) cout<<ans[i]<<endl;
	return 0;
}
