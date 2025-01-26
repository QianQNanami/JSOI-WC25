#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,m,k,j,r,g;
	cin>>n;
	long long a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];
	cin>>m;
	long long b[m],c[m],d[m];
	for(k=1;k<=m;k++)
	{
	g=0;
	cin>>b[k]>>c[k];
	for(j=b[k];j<=c[k];j++)
	g+=a[j];
	d[k]=g;
}
    for(r=1;r<=m;r++)
    cout<<d[r]<<endl;
return 0;
}
