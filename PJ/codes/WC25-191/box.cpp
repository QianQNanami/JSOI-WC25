#include<bits/stdc++.h>
using namespace std;
int a[10],ans;
int main(){
	while(1){
		bool tag=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];if(a[i]!=0)tag=1;
		}
		if(tag==0){
			break;
		}
		ans=0;
		ans+=a[6];
		if(a[5]*11>=a[1]){
			ans+=a[5];
		}
		else {
			ans+=a[5];
			a[1]=a[1]-a[5]*11;
		}
		if(a[4]*5>=a[2]){
			ans+=a[4];
			a[1]=a[1]-(a[4]*5-a[2])*4;
			if(a[1]<0)a[1]=0;
		}
		else {
			ans+=a[4];
			a[2]=a[2]-a[4]*5;
		}
		ans=ans+a[3]/4;
		a[3]%=4;
		ans=ans+a[2]/9;
		a[2]%=9;
		ans=ans+a[1]/36;
		a[1]%=36;
		cout<<ans+(a[1]!=0||a[2]!=0||a[3]!=0);
	}
	return 0;
}
