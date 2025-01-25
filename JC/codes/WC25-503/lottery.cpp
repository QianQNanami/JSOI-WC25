#include<bits/stdc++.h>
using namespace std;
int a,b,ans;
int main(){
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				break;
			}
			if(j+1==i){
				ans++;
				break;
			}
		}	
	}
	if(a==1){
		ans=ans+1;
	}
	cout<<ans<<endl;
	return 0;
}
