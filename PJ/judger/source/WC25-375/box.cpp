#include<bits/stdc++.h>
using namespace std;
int a[16],b,z0;
int main(){
	while(cin>>b){
		for(int i=2;i<=6;i++){
			cin>>a[i];
		}
		a[1]=b;
		for(int i=1;i<=6;i++){
			if(a[i]==0){
				z0++;
			}
		}
		if(z0==6){
			return 0;
		}
		z0=0;
		for(int i=1;i<=5;i++){
			a[i]=a[i]*i*i;
		}
		int bg=0;
		if(a[6]!=0){
			bg+=a[6];
			a[6]=0;
		}
		int y=0;
		for(int i=1;i<=5;i++){
			y+=a[i];
		}
		if(y%36==0){
			bg+=y/36;
		}
		else{
			bg+=y/36+1;
		}
		cout<<bg<<endl;
	} 
	return 0;
}
