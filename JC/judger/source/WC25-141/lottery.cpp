#include <bits/stdc++.h>
using namespace std;
bool flag[1000005];
int main(){
	int n,m,ans=0,sum=0;
	cin >> n >> m;
	for(int i=n;i<=m;i++){
		if(i==2){
			ans++;
			continue;
		}
		for(int j=2;j<i;j++){
			if(i%j==0) break;
			else if(i%j!=0&&j==i-1) ans++;
		}
	}
	cout << ans;
	return 0;
}

