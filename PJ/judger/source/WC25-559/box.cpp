#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[70005];
int main(){
	int sum=0;
	int ans=0;
	for(int i=1;i<=70005;i++){
		for(int i=1;i<=6;i++){
			cin>>a[i];
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}
		ans++;
		sum=a[1]+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
		if(sum%36==0){
			b[i]=sum/36;
		}else{
			b[i]=sum/36+2;
		}
		a[1]=0;
		a[2]=0;
		a[3]=0;
		a[4]=0;
		a[5]=0;
		a[6]=0;
	}
	for(int i=1;i<=ans;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
