#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4;
int n,a[N + 5];
int ans;//s[N + 5];
int s[N + 5];
bool cmp(int a,int b){
	return a > b;
} 
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	} 
	sort(a + 1,a + 1 + n,cmp);
	int flag = 1;
	for(int i = 1;i <= n;i++){
		for(int j = flag;j <= n;j++){
			int half = a[j] / 2;
			if(a[i] <= half && s[i] == 0 && s[j] == 0){
				s[i] = 1;
				s[j] = -1;
				flag = j;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		if(s[i] == 1)
		ans += s[i];
	}
	cout << ans;
	return 0;
}
