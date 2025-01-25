#include<bits/stdc++.h>
using namespace std;
int n;
int a[405][405];
int b[405][405];
int sum1[405][405];
int sum2[405][405];
int sum3[405][405];
int sum4[405][405];
int ans=-4e5;
 int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){
		cin>>a[i][j];
		b[i][n-j+1]=a[i][j];
	}
	for(int j=1;j<=n;j++) for(int i=1;i<=n-j+1;i++) sum1[j-1][i]=sum1[j-1][i-1]+a[i][j+i-1];
	for(int i=1;i<=n;i++) for(int j=1;j<=n-i+1;j++) sum2[i-1][j]=sum2[i-1][j-1]+a[i+j-1][j];
	for(int j=1;j<=n;j++) for(int i=1;i<=n-j+1;i++) sum3[j-1][i]=sum3[j-1][i-1]+b[i][j+i-1];
	for(int i=1;i<=n;i++) for(int j=1;j<=n-i+1;j++) sum4[i-1][j]=sum4[i-1][j-1]+b[i+j-1][j];
	for(int len=2;len<=n;len++) for(int i=1;i<=n-len+1;i++) for(int j=1;j<=n-len+1;j++)  {
		if(j-i>=0){
			int l=sum1[j-i][i+len-1]-sum1[j-i][i-1];
			int s=i+len-1;
			int t=j+len-1;
			int o=n-t+1;
			int p=n-j+1;
			int r=sum4[i-o+1][p]-sum4[i-o+1][o-1];
			ans=max(ans,l-r);
//			cout<<i<<" "<<j<<" "<<len<<" "<<i-o+1<<" "<<l<<" "<<r<<"\n";
		}
		else{
			int l=sum2[i-j][j+len-1]-sum2[i-j][j-1];
			int s=i+len-1;
			int t=j+len-1;
			int o=n-t+1;
			int p=n-j+1;
			int r=sum3[o-i+1][s]-sum3[o-i+1][i-1];
			ans=max(ans,l-r);
//			cout<<i<<" "<<j<<" "<<len<<" "<<i-o+1<<" "<<l<<" "<<r<<"\n";
		}
	}
	cout<<ans;
	return 0;
}
//ÍêÀ² 
