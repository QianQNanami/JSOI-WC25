#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,ans,c=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		for(int A=0;A<=i;i++){
		if(i/A==i-A)
		c++;	}
		if(c==2)
		ans++;
	}
	cout << ans;
	return 0;
}
