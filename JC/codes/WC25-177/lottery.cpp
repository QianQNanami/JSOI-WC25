#include<bits/stdc++.h>
using namespace std;

int main(){
	int x=0,m=0,n=0;
	int ans;
	cin>>m>>n;
	for(int i=0;i<=n-m;i++)
		if((n+m)%m==0){
			ans++;
		}
	cout<<ans;
	return 0;
}
