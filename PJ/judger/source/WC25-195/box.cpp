#include<bits/stdc++.h>
using namespace std;
int a[7],s,n;
int main(){
	while(1){
	for(int i=1;i<=6;i++){
	cin>>a[i];
	n=max(a[i],n);
	}
	if(n==0) return 0;
	s=a[1]+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
	if(s%36==0) cout<<s/36<<endl;
	else cout<<s/36+1<<endl;
	n=0;
	}
	return 0;
}
