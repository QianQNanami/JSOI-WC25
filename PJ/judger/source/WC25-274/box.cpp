#include <bits/stdc++.h>
using namespace std;
int a[10000*7],ans,sum;
int main(){
	while(1){
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
		if(a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0 && a[6]==0 ) break;
		for(int i=1;i<=6;i++){
			if(a[i]!=0){
				if(i*a[i]/2==6){
					a[i]=0;
					ans++;
				}else if(i*a[i]/2>6){
					sum=12/i;
					a[i]-=sum;
					ans++;
				}else{
					sum=12/a[i]/i;
					a[sum]--;
					ans++;
				}
			}
		}
		cout<<ans<<'\n';
	}
		
	return 0;
}
/*
 0 0 4 0 0 1
 7 5 1 0 0 0
 0 0 0 0 0 0
*/
