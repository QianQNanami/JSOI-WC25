#include<bits/stdc++.h>
using namespace std;
int n,k,ans=0;
int main(){
    cin>>n>>k;
	for(int i=1; ;i++){
		if((n-k)%2!=0&&(n+k)%2!=0){
			ans=ans+1;
		}else{
			if(n!=0){
			n=(n-k)/2;
		}else{
			break;
		}
		}
	}
	cout<<ans;
	return 0;
}
