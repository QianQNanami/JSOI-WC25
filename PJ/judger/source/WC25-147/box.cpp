#include<bits/stdc++.h>
using namespace std;
long long z,o,a[11];
int main(){
	while(cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]){
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) return 0;
		//	#ifndef //#elif//#endif
		o=a[1]*1+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
		if(o*1.0-floor(o)>0) cout<<floor(o)/36+1<<endl;
		else {
			if(o%36==0) cout<<o/36<<endl;
			else cout<<o/36+1;
		}
}
	return 0;
}
