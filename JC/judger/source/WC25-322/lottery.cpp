#include<bits/stdc++.h>
using namespace std;
int m,n,cnt=0;
int main() {
	cin>>m>>n;
	for(int i=m; i<=n; i++) {
		for(int x=2; x<=i; i++) {
			if(i%x!=0)
				cnt++;
			cout<<cnt;	
		}
	}
	
	return 0;
}
