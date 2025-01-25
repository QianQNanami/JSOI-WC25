#include<bits/stdc++.h>
using namespace std;
long long nmr[500][500],nml[500][500],n,d=INT_MIN;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>nmr[i][j];
			nml[i][j]=nmr[i][j];
			nml[i][j]+=nml[i-1][j+1];
			nmr[i][j]+=nmr[i-1][j-1];
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n-k;i++){
			for(int j=1;j<=n-k;j++){
				d=max(d,(nmr[i+k][j+k]-nmr[i-1][j-1])-(nml[i+k][j]-nml[i-1][j+k+1]));
			}
		}
	}
	cout<<d;
	return 0;
} 
