#include<bits/stdc++.h>
using namespace std;
bool check(int a){
		for(int j=2;j<=a;j++){
			if (a%j==0&&j!=1&&j!=a) return false;
	}
		return true;
}
int main(){
	int m,n,ans;
	cin>>n>>m;
	if(m<n) swap(n,m);
	for (int i=n+1;i<m;i++){
		if (check(i)) ans++;
	}
	cout<<ans;
	return 0;
	}
