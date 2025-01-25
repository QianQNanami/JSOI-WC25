#include<bits/stdc++.h>
using namespace std;
const int N = 4e2;
int n;
int num[N + 2][N + 2];
int dp1[N + 2][N + 2][N + 2];
int dp2[N + 2][N + 2][N + 2];
int ans = INT_MIN;
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	    for(int j = 1;j <= n;j++){
	        cin >> num[i][j];
	    	dp1[i][j][1] = num[i][j];
	    	dp2[i][j][1] = num[i][j];
		}
	for(int len = 2;len < n * 2;len++){
		int res2 = 0;
		for(int i = 1;i <= len;i++)
		    res2 += num[i][len - i + 1];
		dp2[1][1][len] = res2;
	}
	for(int i = 2;i <= n;i++){
		for(int len = 2;i + len - 1 < n * 2 && len < 2 * n;len++){
			dp2[i][1][len] = dp2[i - 1][1][len + 1] - num[i - 1][1 + len];
		}
	}
	for(int i = 1;i <= n;i++)
	    for(int j = 1;j <= n;j++)
	        for(int len = 2;max(j + len - 1,i + len - 1) < 2 * n;len++){
	        	dp1[i][j][len] = dp1[i][j][len - 1] + num[i + len - 1][j + len - 1];
	        	if(j != 1)
	        		dp2[i][j][len] = dp2[i][j - 1][len + 1] - num[i + len][j - 1];
	        	if(i + len - 1 <= n && j + len - 1 <= n)
					ans = max(ans,dp1[i][j][len] - dp2[i][j][len]);
				
			}
//	for(int len = 1;len <= n;len++){
//		cout << len << endl;
//		for(int i = 1;i <= n;i++){
//		    for(int j = 1;j <= n;j++)
//		        cout << dp1[i][j][len] << " ";
//		    cout << endl;
//		}
//		for(int i = 1;i <= n;i++){
//			for(int j = 1;j <= n;j++)
//			    cout << dp2[i][j][len] << " ";
//			cout << endl;
//		}
//		cout << endl;
//	}
	cout << ans << endl;
	return 0;
} /*


5
1 1 4 -5 1
4 1 -9 -9 1
8 1 0 -1 1
4 5 -1 5 3
-9 -8 -7 -6 -5 


*/
