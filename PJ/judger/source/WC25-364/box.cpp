#include<bits/stdc++.h>
using namespace std;
int a[10],ans;
int main(){
	while(1){
		for(int i=1;i<=6;i++){
			cin>>a[i];
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) break;
		else {
			ans+=a[1]*1+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
			cout<<ans/36<<endl;
		}
		ans=0;
	}
	return 0;
}

