#include<bits/stdc++.h>
using namespace std;
int a[100005],qz[100005];
int main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		qz[i] = a[i] + qz[i-1];
	}
	int m; cin >> m;
	while(m--){
		int l,r; cin >> l >> r;
		cout << qz[r] - qz[l-1] << "\n";
	}
	return 0; 
}
/*


*/
