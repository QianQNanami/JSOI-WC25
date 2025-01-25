#include<bits/stdc++.h>
using namespace std;
long long a[405][405],n,ans = -1e9,cnt;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 2;i <= n;i++){
		for(int j = 1;j <= n - i + 1;j++){
			for(int k = 1;k <= n - i + 1;k++){
				for(int l = 0;l < i;l++){
					for(int m = 0;m < i;m++){
						if(l == m){
							cnt += a[j + l][k + m];
						}
						else{
							cnt -= a[j + l][k + m];
						}
					}
				}
				ans = max(ans,cnt);
				cnt = 0;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
