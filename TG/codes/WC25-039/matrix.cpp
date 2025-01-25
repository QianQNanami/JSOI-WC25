#include<bits/stdc++.h>
using namespace std;
int a[405][405];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n,ans=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=2;i+k-1<=n&&j+k-1<=n;k++){
				int cnt1=0;
				for(int ii=i;ii<=i+k-1;ii++){
					cnt1+=a[ii][ii];
					cnt1-=a[ii][i+k-ii];
				}
				ans=max(ans,cnt1);
			}
		}
	}
	cout<<abs(ans)<<endl;
	return 0;
}//O(n^4)
