#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10],ans;
	while(cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]){
		ans=a[6];
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			return 0;
		}
		ans+=(a[1]+a[2]*4+a[3]*9+a[4]*16+a[5]*25)/36+((a[1]+a[2]*4+a[3]*9+a[4]*16+a[5]*25)%36?1:0);
		cout<<ans<<"\n";//zheshicuode,yinggainengguobufenceshidian
	}
}
