#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    if(a<=2&&a>1){
    	ans=ans+1;
	}
	for(int i=a;i<=b;i++){
    	if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
    		ans++;    		
		}
	}
	ans=ans+3;
	cout<<ans<<endl;
	return 0;
}

