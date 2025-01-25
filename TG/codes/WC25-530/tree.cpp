#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 3e5,S = 4e7,AD = 500;
int n,tot,ans,val[N + 5],sum[N + 5],ton[S + 5];
vector<int> v[N + 5];
void dfs(int x){
	for(int i = 0;i < v[x].size();i++){
		int t = v[x][i];
		dfs(t);
		sum[x] += sum[t];
	}
	sum[x] += val[x];
	if(sum[x] <= S)
		ton[sum[x] + AD]++;
}
signed main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		int t;
		cin >> val[i] >> t;
		v[t].push_back(i);
	}
	dfs(0);
	for(int i = 0;i <= S;i++){
		if(ton[i] >= 2){
			ans += ton[i] * (ton[i] - 1) / 2;
		}
	}
	cout << ans << endl;
    return 0;
}
/*
8
-1 0
-2 0
-1 0
-2 0
-2 1
-1 2
-2 3
-3 4 

*/
