#include<bits/stdc++.h>
using namespace std;
int n,a[405][405];
int sum1[405][405],sum2[405][405];
int ans=-2e9;
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum1[i][j]=sum1[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum2[i][j]=sum2[i-1][j+1]+a[i][j];
		}
	}
	for(int i=2;i<=n;i++){
        for(int j=1;i+j-1<=n;j++){
            for(int k=1;i+k-1<=n;k++){
                ans=max(ans,(sum1[i+j-1][i+k-1]-sum1[j-1][k-1])-(sum2[i+j-1][k]-sum2[j-1][i+k+1]));
            }
        }
	}
	cout<<ans;
	return 0;
}
