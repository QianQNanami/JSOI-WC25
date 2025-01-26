#include<bits/stdc++.h>
using namespace std;
int a[7],cnt=0;;
void fang(){
	while(a[2]>=9){
		cnt++;
		a[2]-=9;
	}
	while(a[3]>=4){
		cnt++;
		a[3]-=4;
	}
	while(a[1]>=7&&a[2]>=5&&a[3]>=1){
		a[1]-=7;
		a[2]-=5;
		a[3]-=1;
		cnt++;
	}
	while(a[2]>=2&&a[3]>=1){
		a[2]-=2;
		a[3]-=1;
		cnt++;
	}
	while(a[1]>=11){
		for(int i=5;i>=1;i--){
			if(a[1]+i*i>=36){
				cnt++;
				a[1]=a[1]-(36-i*i);
				a[i]-=1;
			}
		}
	}
	if(a[1]>=1){
		for(int i=2;i<=5;i++){
			if(a[i]>=1){
				a[i]-=1;
				a[1]=0;
				cnt++;
			}
		}
	}
	for(int i=1;i<=5;i++){
		cnt+=a[i];
	}
}
int main(){
	while(1){
		cnt=0;
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}
		cnt+=a[6];
		fang();
		cout<<cnt<<endl;
	}
	return 0;
}
