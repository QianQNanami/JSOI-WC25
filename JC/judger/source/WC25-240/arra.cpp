#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans=0;
int  work(int n,int k){
	if(n==k||(n-k)%2!=0)return ans;
	int x,y;
	if((n-k)%2==0){
		x=n/2+1;
		y=n/2-1;
		work(x,k);
		work(y,k);
	}
	
}
int main() {
	cin>>n>>k;
	work(n,k);
	cout<<ans;
	return 0;
}
