#include <bits/stdc++.h>
using namespace std;
int a[70020];
int main(){
	while(1){
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}else{
			int k=a[1]*1+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
			if(k%36==0){
				cout<<k/36<<endl;
			}else{
				cout<<k/36+1<<endl;
			}
		}
	}
	return 0;
}

