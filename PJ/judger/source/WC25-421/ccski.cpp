#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[505][505],b[505][505]; 
int ans;
int main(){
	cin >> m >> n;
	for (int i = 1;i <= m;i++){
		for (int j = 1;j <= n;j++){
			cin >> a[i][j];
		} 
	}
	for (int i = 1;i <= m;i++){
		for (int j = 1;j <= n;j++){
			cin >> b[i][j];
			if (b[i][j]){
				ans+=a[i][j];
			}
		} 
	}
	cout << ans/5;
	return 0;
}
