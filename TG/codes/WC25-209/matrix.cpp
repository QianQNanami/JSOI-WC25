#include <bits/stdc++.h>
using namespace std;
int a[405][405],d1[810][405],d2[810][405];
int n,ans=INT_MIN;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]); 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d1[n+i-j][min(i,j)]=a[i][j];
			d2[i+j-1][min(j,n-i+1)]=a[i][j];
		}
	}
	
	for(int i=1;i<=2*n-1;i++){
		if(i<=n){
			for(int j=1;j<=i;j++){
				d1[i][j]+=d1[i][j-1];
				d2[i][j]+=d2[i][j-1];
			}
		}else{
			for(int j=1;j<=2*n-i;j++){
				d1[i][j]+=d1[i][j-1];
				d2[i][j]+=d2[i][j-1];
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=2;j+k-1<=n,i+k-1<=n;k++){
				int x1=n+i-j,y1=min(i,j);
				int x2=(i+k-1)+j-1,y2=min(j,n-(i+k-1)+1);
				int l=d1[x1][y1+k-1]-d1[x1][y1-1];
				int r=d2[x2][y2+k-1]-d2[x2][y2-1];
				int D=l-r;
				ans=max(D,ans);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
