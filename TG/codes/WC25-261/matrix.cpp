#include<bits/stdc++.h>
using namespace std;
int a[410][410],n,d=-10000000;
int c[410][410],s[410][410];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=2;i<=n;++i){
		for(int j=0;j<i;++j){
			c[1+j][i-j]=c[j][i-j+1]+a[1+j][i-j];
		}
	}
	for(int i=2;i<n;++i){
		for(int j=0;j<=n-1;++j){
			c[i+j][n-j]=c[i+j-1][n-j+1]+a[i+j][n-j];
		}
	}
	for(int i=1;i<n;++i){
		for(int j=0;j<=n-i;++j){
			s[1+j][i+j]=s[j][i+j-1]+a[1+j][i+j];
		}
	}
	for(int i=2;i<n;++i){
		for(int j=0;j<=n-i;++j){
			s[i+j][1+j]=s[i+j-1][1+j-1]+a[i+j][1+j];
		}
	}
	for(int i=1;i<n;++i){
		for(int j=1;j<n;++j){
			int m=n-max(i,j)+1;
			for(int k=2;k<=m;++k){
				d=max(d,s[i+k-1][j+k-1]-s[i-1][j-1]-c[i+k-1][j]+c[i-1][j+k]);
			}
		}
	}
	cout<<d<<endl;
	return 0;
}
