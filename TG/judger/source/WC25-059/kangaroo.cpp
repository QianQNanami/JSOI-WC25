#include <bits/stdc++.h>
using namespace std;
int n , a[1000005] = {} , flag[1000005] = {} , t[1000005] = {} , sum = 0;
int main(){
	freopen("kangaroo.in" , "r" , stdin);
	freopen("kangaroo.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i] , t[i] = a[i] / 2;
	sort(a + 1 , a + n + 1);
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++){
			if(a[j] <= t[i] && flag[j] == 0) sum++ , flag[j] = 1 , flag[i] = 1;
		}
	}
	cout << sum;
	return 0;
}
