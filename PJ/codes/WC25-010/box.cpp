#include<bits/stdc++.h>
using namespace std;
int a[6],t,sum,c=0,b[70000];
int main(){
	while(1){
		for(int i=0;i<6;i++) cin>>a[i];
		t=0;
		sum=0;
		for(int i=0;i<6;i++){
			if(a[i]!=0) t=1;
		}
		if(t==0) break;
		sum=a[0]*1+a[1]*4+a[2]*9+a[3]*16+a[4]*25+a[5]*36;
		if(sum%36==0) b[c]=sum/36;
		else b[c]=sum/36+1;
		c++;
	}
	for(int i=0;i<c;i++) cout<<b[i]<<endl;
	return 0;
}

