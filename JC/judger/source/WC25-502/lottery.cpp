#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,ans=0,i;
	cin>>m>>n;
	for(i=m;i<=n;i++){
		if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 ){
			ans++;
		}
		if(i==2) ans++;
		else if(i==3) ans++;
		else if(i==5) ans++;
		else if(i==7) ans++;
		else if(i==1 || i==0){
			if(ans>0) ans--;
			else ans=0;
		}
		else ans=ans+0;
	}
	cout<<ans;
	return 0;
}
