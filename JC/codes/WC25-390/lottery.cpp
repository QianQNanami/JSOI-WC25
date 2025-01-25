#include<bits/stdc++.h>
using namespace std;
long long m,n,cnt;
int main(){
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(n%i==0) cnt++;
	}
	cout<<cnt+2;
	return 0;
}
