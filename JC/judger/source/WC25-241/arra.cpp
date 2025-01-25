#include<bits/stdc++.h>
using namespace std;
int x,y,n,k,ans=1;
bool f1=1,f2=1;
int main(){
	cin>>n>>k;
	if((n-k)%2!=0){
		cout<<"0";
		return 0;
	}
	x=(n-k)/2+k;
	y=(n-k)/2;
	while(1){
		if((x-k)%2!=0&&(y-k)%2!=0&&x>0&&y>0){
			break;
		}
		int x1=0,y1=0,x2=0,y2=0
		while(f1==1){
			if((x1-k)%2!=0&&(y1-k)%2!=0){
			 	break;
			}
		}
	}
	return 0;
}
