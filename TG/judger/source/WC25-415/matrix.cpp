#include <bits/stdc++.h>
#define int long long
#define _start ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define pb(x) push_back(x)
#define mp(a,b) make_pair(a,b)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int N = 4e2+5;
int a[N][N];
int sum1[N][N];
int sum2[N][N];
int n;
int ans=-1e18;
signed main(){
	_start;
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			sum1[i][j]=sum1[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			sum2[i][j]=sum2[i-1][j+1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int d=2;d+i-1<=n;d++){
				int k=i+d-1,l=j+d-1;
				if(k-i==l-j&&k!=i){		//构成正方形 
					//cout << i << ' ' << j << ' ' << k << ' ' << l << endl;
					int L1=sum1[k][l]-sum1[i-1][j-1];
					int L2=sum2[k][j]-sum2[i-1][l+1];
					//cout <<sum2[i][l] << ' ' << -sum2[k-1][j+1] << endl;
					ans=max(ans,L1-L2);
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}/*
2
1 -2
4 5
*/
