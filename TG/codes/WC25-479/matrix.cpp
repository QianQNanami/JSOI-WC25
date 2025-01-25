#include<bits/stdc++.h>
using namespace std;
int n,a[405][405];
int ans=-1145141919;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	for(int i1=1;i1<=n;i1++){
		for(int j1=1;j1<=n;j1++){
			for(int i2=i1+1;i2<=n;i2++){
				int j2=j1+i2-i1;
				int sum1=0,sum2=0;
				for(int t=i1;t<=i2;t++){
					sum1+=a[t][t];
					sum2+=a[t][i2-t+i1];
				}		
				ans=max(ans,sum1-sum2);
			} 			
		}
	}
	cout<<ans<<endl;
	return 0;
} 
