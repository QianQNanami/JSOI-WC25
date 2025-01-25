#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
	int n,a[50010],cnt = 0,v[50010] = {};
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	for(int i = 1;i<=n;i++){
		if(a[i]*2>a[n]) break;
		for(int j = i+1;j<=n;j++){
			if(a[i]*2<=a[j] && !v[j]){
				cnt++;
				v[j] = 1;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}
