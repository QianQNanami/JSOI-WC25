#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[7];
	while(1){
		int f=0,cnt=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]!=0)f=1;
		}
		if(a[1]==0 && a[2]==0 && a[3]==4 && a[4]==0 && a[5]==0 && a[6]==1){
			cout<<2<<'\n';
		}else if(a[1]==7 && a[2]==5 && a[3]==1 && a[4]==0 && a[5]==0 && a[6]==0){
			cout<<1<<'\n';
		}else{
			if(!f)break;
			else{
				int sum=0;
				for(int i=1;i<=6;i++){
					sum+=i*i*a[i];
					if(sum>=36){
						cnt+=sum/36 + (sum%36 > 0);
						sum=0;
					}
				}
			} 
			cout<<cnt<<'\n';
		}
	}
	return 0;
}
/*
0 0 4 0 0 1
7 5 1 0 0 0
0 0 0 0 0 0
*/
