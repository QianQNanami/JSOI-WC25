#include <bits/stdc++.h>
using namespace std;
int a1,a2,sum=0,sum1=0,sum2=0,num=0;
int f(int x,int y,int z){
	for(int i=1;i<x;i++){
		if(i-x+i==z||x-i-i==z){
			x=i;
			y=x-i;
			if(x-z<2){
				num++;
			}
			if(y-z<2){
				num++;
			}
		}else{
			sum1++;
		}
	}
	if(sum1==x-1){
		num++;
	}
	for(int i=1;i<y;i++){
		if(i-y+i==z||y-i-i==z){
			x=i;
			y=y-i;
			if(y-z<2){
				num++;
			}
			if(x-z<2){
				num++;
			}
		}else{
			sum2++;
		}
	}
	if(sum2==y-1){
		num++;
	}
	cout<<num;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<n;i++){
		if(i-n+i==k||n-i-i==k){
			a1=i;
			a2=n-i;
		}else{
			sum++;
		}
	}
	if(sum==n-1){
		num++;
	}
	f(a1,a2,k);
	return 0;
}
