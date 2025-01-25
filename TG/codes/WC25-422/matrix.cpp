#include <iostream>
#include <fstream>

using namespace std;
int n;
int a[401][401],la[401][401],ra[401][401],f[401][401];

int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>a[i][j];
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j){
			la[i][j]=la[i-1][j-1]+a[i][j];
			ra[i][j]=ra[i-1][j+1]+a[i][j];
		}
	for(int k=2;k<=n;++k)
		for(int i=k-1;i<n;++i)
			for(int j=k-1;j<n;++j){
				int x=la[i][j]-ra[i][j-k+1];
				if(f[i][j]<x)f[i][j]=x;
			}
	int max=f[1][1];
	for(int i=1;i<n;++i)
		for(int j=1;j<n;++j)
			if(max<f[i][j])max=f[i][j];
	cout<<max<<'\n';
	return 0;
} 
