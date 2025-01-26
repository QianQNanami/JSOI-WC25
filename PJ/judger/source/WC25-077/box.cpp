#include<bits/stdc++.h>
using namespace std;
int a[7];
int n=6;
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
	while(1){
		int f=0;
		int cnt=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			f+=a[i];
		}
		cnt+=a[6];
		a[6]=0;
		if(!f){
			return 0;
		}
		cnt+=a[5];
		a[1]-=a[5]*11;
		a[1]=max(a[1],0);
		cnt+=a[4];
		if(a[4]&&a[2]<5*a[4]&&a[1]>=a[4]*5-a[2]){
			a[1]-=a[4]*5-a[2];
			a[1]=max(a[1],0);
			a[2]=0;
		}else{
			a[2]-=5*a[4];
			a[2]=max(a[2],0);
		}
		cnt+=ceil(a[3]*1.0/4);
		if(a[3]%4!=0){
			if(a[2]>=(a[3]%4==1?5:(a[3]%4==2?3:1))){
				a[2]-=(a[3]%4==1?5:(a[3]%4==2?3:1));
				if(a[1]){
					a[1]-=(a[3]%4==1?7:(a[3]%4==6?3:5));
					a[1]=max(a[1],0);
				}
			}
		}
		cnt+=ceil(a[2]*1.0/9);
		if(a[1]&&a[2]%9){
			a[1]-=(9-a[2]%9)*4;
			a[1]=max(a[1],0);
		}
		cnt+=ceil(a[1]*1.0/36);
		cout<<cnt<<endl;
	}
}
