#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,cnt;
	int a1,a2,a3,a4,a5,a6;
	int c[4]={0,5,3,1};
	while(1){
		cnt=0;
		cin>>a1>>a2>>a3>>a4>>a5>>a6;
		if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0)break;
		cnt+=a6+a5+a4+(a3+3)/4;
		x=5*a4+c[a3%4];
		if(a2>x){
			cnt+=(a2-x+8)/9;
		}
		y=36*cnt-36*a6-25*a5-16*a4-9*a3-4*a2;
		if(a1>y){
			cnt+=(a1-y+35)/36;
		}
		cout<<cnt;
	}
	return 0;
} 
