#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll a[100000];
	ll cnt=0,sum=0;
	for(int i=0;i<10000;i++){
		cnt=0;
		for(int j=0;j<6;j++){
			cin>>a[j];
			if(a[j]==0)cnt++;
		}sum++;
		if(cnt==6)break;
	}
	for(int i=1;i<sum;i++){
		ll ss=0;
		ll sl=0;
for(int j=1;j<=6;j++){
			ss+=a[j]*i;
		}
			if(ss>6){
			sl++;
			ll ss=0;
		for(int j=2;j<=6;j++){
			ss+=a[j]*i;
		}
			if(ss>6){
			sl++;
			ll ss=0;
		for(int j=3;j<=6;j++){
			ss+=a[j]*i;
		}
			if(ss>6){
			sl++;
			ll ss=0;
		for(int j=4;j<=6;j++){
			ss+=a[j]*i;
		}
			if(ss>6){
			sl++;
			ll ss=0;
		for(int j=6;j<=6;j++){
			ss+=a[j]*i;
		}
			if(ss>6){
			sl++;
		}
		}
		}
		}
		}
		cout<<sl+i<<endl;
}
	return 0;
}
