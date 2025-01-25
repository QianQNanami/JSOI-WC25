#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,ans=0,a[1001],i=0;
	cin>>n>>k;
	for(;;){
		if(n<=k){
			cout<<ans+1;
			break;
		}
		if(n>k){
			if((n-k)%2!=0){
				n=(n-k)/2+k;
				a[i]=(n-k)/2;
				i++;
				ans+1;
			}
			else{
				n=(n-k)/2+k;
				a[i]=(n-k)/2;
				i++;
			}
		}
	}
	return 0;
}
