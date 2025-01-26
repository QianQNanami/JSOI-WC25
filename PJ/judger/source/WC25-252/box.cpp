#include<bits/stdc++.h>
using namespace std;
int a[109];
int main(){
	while(1){
		int N=0,ans=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]==0)N++;
		}
		if(N==6)return 0;
		a[1]-=11*a[5];
		a[2]-=5*a[4];
		ans+=a[6]+a[5]+a[4]+a[3]/4+a[2]/9+a[1]/36;
		a[1]%=36,a[2]%=9,a[3]%=4;
		if(a[1]!=0||a[2]!=0||a[3]!=0){
			ans+=1;
			int x=36-9*a[3];
			if(a[1]<=x)x-=a[1],a[1]=0,a[2]=max(0,a[2]-x/4);
			else a[1]-=x;
		}
		if(a[1]!=0||a[2]!=0){
			int y=36-4*a[2];
			if(a[1]<=y)ans++;
			else ans+=2;
		}
		cout<<ans<<endl;
	}
} 
