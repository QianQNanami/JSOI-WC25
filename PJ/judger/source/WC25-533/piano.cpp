#include<bits/stdc++.h>
using namespace std;
int t,x1[1005],x[1005][18];
int main() {
	cin>>t;
	for(int i=1; i<=t; i++) {
		cin>>x1[i];
		for(int j=1; j<=x1[i]; j++) cin>>x[i][j];
		sort(x[i]+1,x[i]+x1[i]+1);
	}
	cout<<-1;
	return 0;
}

