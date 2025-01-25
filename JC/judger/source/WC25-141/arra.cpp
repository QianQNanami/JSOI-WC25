#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,ans=0;
	cin >> n >> k;
	int f=(n-k)/2;
	int x=f+k;
	if((f-k)%2==0){
		ans++;
	}
	for(int i=1;i<sqrt(n);i++){
		int s=f-x;
		if(s%2==0){
			ans++;
		}
	}
	cout << ans ;
	return 0;
}

