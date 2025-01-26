#include<bits/stdc++.h>
using namespace std;
int a[8],ans[70010],z=0,k=1,q;
int main(){
	while(1){
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]==0) z++;
		}
		if(z==6) break;
		if(a[6]!=0) ans[k]+=a[6];
		if(a[5]!=0){
			ans[k]+=a[5];
			if(a[1]<=a[5]*11) a[1]=0;
			else a[1]-=a[5]*11;
		}
		if(a[4]!=0){
			ans[k]+=a[4];
			if(a[2]<=a[4]*5){
				if(a[1]!=0){
					if(a[1]<=(a[4]*5-a[2])*4) a[1]=0;
					else a[1]-=(a[4]*5-a[2])*4;
				}
				a[2]=0;
			}
			else a[2]-=a[4]*5;
		}
		if(a[3]!=0){
			ans[k]+=a[3]/4;
			if(a[3]%4!=0){
				q=a[3]%4;
				if(a[2]!=0){
					if(a[2]<=(4-q)*2-1){
						if(a[1]>36-q*9-a[2]*4) a[1]-=((4-q)*2-1);
						else a[1]=0;
						a[2]=0;
					}
					else a[2]-=(4-q)*2-1;
				}
				ans[k]++;
			}
		}
		if(a[2]!=0){
			ans[k]+=a[2]/9;
			if(a[2]%9!=0){
				q=a[2]%9;
				if(a[1]!=0){
					if(a[1]>36-q*4) a[1]-=(36-q*4);
					else a[1]=0;
				}
				ans[k]++;
			}
		}
		ans[k]+=a[1]/36;
		if(a[1]%36!=0) ans[k]++;
		k++;
		z=0;
	}
	for(int i=1;i<k;i++) cout<<ans[i]<<endl;
	return 0;
}
