#include<bits/stdc++.h>
using namespace std;
//#define int long long
const int N = 400;
int n,a[N + 5][N + 5];
int aum,sum,ans;
void sol(int t){
	int num = t * t;
	int len = n - t + 1;
	for(int i = 1;i <= num;i++){
		for(int j = 1;j <= len - 1;j++){
			for(int k = len;k <= 2 * len - 1;k += 2){
				sum += a[i][k - i];
				aum += a[i][4 - i];
				ans = max(ans,sum - aum);
			}	
		}
	}
	if(t == n) return;
	sol(t + 1);
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	
	sol(1);
	return 0;
} 
