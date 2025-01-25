#include<bits/stdc++.h>
using namespace std;
const int N=405;
int a[N][N],ul[N][N],ur[N][N];
int n,ans;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	ans=-1e7;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ul[i][j]=ul[i-1][j-1]+a[i][j];
			ur[i][j]=ur[i-1][j+1]+a[i][j];
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cout<<ur[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			for(int k=2;k<=n-min(i,j)+1;k++){
				int num=(ul[i+k-1][j+k-1]-ul[i][j]+a[i][j])-(ur[i+k-1][j]-ur[i][j+k-1]+a[i][j+k-1]);
				ans=max(ans,num);
			}
		}
	}
	cout<<ans;
	return 0;
}
