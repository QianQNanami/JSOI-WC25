#include<bits/stdc++.h>
using namespace std;
int m,n;
int ans=0;
int main() {
	cin>>m>>n;
	for(int i=m; i<=n; i++) {
		for(int j=2; j<=i/2; j++) {
			if(i%j==0) {
				break;
			}
			if(j==i/2&&i%j!=0)ans++;
		}
	}
	if(m<=1)ans+=2;
	if(m==2)ans++;
	cout<<ans<<endl;
	return 0;
}
