#include<bits/stdc++.h>
using namespace std;
int main() {
	while(1) {
		int a[7],ans=0;
		for(int i=1; i<=6; i++) scanf("%d",&a[i]);
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) break;
		if(a[6]!=0) ans+=a[6];
		if(a[5]!=0) {
			ans+=a[5];
			a[1]-=a[5]*11;
			if(a[1]<0) a[1]=0;
		}
		if(a[4]!=0) {
			ans+=a[4];
			a[2]-=a[4]*5;
			if(a[2]<0) a[2]=0;
		}
		if(a[3]>=4) {
			int x=a[3]/4;
			ans+=x;
			a[3]-=4*x;
		}
		if(a[2]>=9){
			int y=a[2]/9;
			ans+=y;
			a[2]-=9*y;	
		} 
		ans+=ceil((double)(a[1]+a[2]*4+a[3]*9)/36);
		printf("%d",ans);
	}
	return 0;
}
