#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10];
bool finish(int b[10]) {
	for(int i=1; i<=6; i++) if(b[i]) return false;
	return true;
}
signed main() {
	while(1) {
		for(int i=1; i<=6; i++) cin>>a[i];
		if(finish(a)) break;
		int cnt=0;
		for(int i=1; i<=6; i++) cnt=cnt+i*i*a[i];
		if(cnt%36==0) cout<<cnt/36<<endl;
		else cout<<cnt/36+1<<endl;
	}
	return 0;
}

