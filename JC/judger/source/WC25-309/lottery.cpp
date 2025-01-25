#include<bits/stdc++.h>
using namespace std;
long long x,y,z,cnt;
int main() {
	cin>>x>>y;
	z=y-x+1;
	for(int i=1; i<=z; i++) {
		int sum=0;
		for(int k=1; k<=i; k++) {
			if(i%k==0)sum++;
		}
		if(sum==2)cnt++;

	}
	cout<<cnt;
	return 0;
}
