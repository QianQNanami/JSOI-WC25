#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
	int cnt=0;
	while(1){
		int a1,a2,a3,a4,a5,a6;
		cin>>a1>>a2>>a3>>a4>>a5>>a6;
		if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0){
			break;
		}
		int k1=a1;
		int k2=4*a2;
		int k3=9*a3;
		int k4=16*a4;
		int k5=25*a5;
		int k6=36*a6;
		int sum=k1+k2+k3+k4+k5+k6;
		cnt++;
		if(sum%36!=0){
			a[cnt]=sum/36+1;
		}
		else{
			a[cnt]=sum/36;
		}
	}
	for(int i=1;i<=cnt;i++)cout<<a[i]<<endl;
	return 0;
}
