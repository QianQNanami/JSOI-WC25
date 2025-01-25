#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4 + 5;
int n,k,m,ans = INT_MAX,sum;
int num[N],h[N];
int a;
signed main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin >> n >> k >> m;
	for(int i = 1;i <= n;i++){
		cin >> num[i];
	} 
	for(int i = 1;i <= m;i++){
		cin >> a;
		if(a == 1){
			int p,q;
			cin >> p >> q;
			num[p] = q;
			for(int i = 1;i <= n;i++){
				cout << num[i] << " ";
			}
			cout <<endl;
		}
		else{	
			ans = INT_MAX;
			bool flag = false;
			for(int w = 1;w <= n;w++){
				int sum = 0;
				int cnt = 0;
				for(int j = 1;j <= k;j++){
					h[j] = 0;
				}
				for(int j = w;j <= n;j++){
					sum++;
					if(h[num[j]] == 0){
						cnt++;		
					}
					h[num[j]]++;
					if(cnt == k){
						ans = min(ans,sum);
						flag = true;
						break;
					}
				}
				
			}
			if(flag = true && ans != INT_MAX){
				cout << ans <<endl;
			}
			else{
				cout << -1 <<endl;
			}
		}
	}
	
	return 0;
}
/*

4 3 5
2 3 1 2
2
1 3 3
2
1 1 1
2



6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2

*/
