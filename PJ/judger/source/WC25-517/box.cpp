#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10];
int ans[10010];
signed main(){
	int f,j;
	while(1){
		j++;
		ans[j]=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
		}
		f=0;
		for(int i=1;i<=6;i++){
			if(a[i]!=0){
				f=1;
			}
		}
		if(f==0){
			break;
		}
		ans[j]+=a[6];
		ans[j]+=a[5];
		a[1]-=a[5]*11;
		ans[j]+=a[4];
		a[1]-=a[4]*5-a[2]*4;
		a[2]-=a[4]*5;
		if(a[3]%4==0){
			ans[j]+=a[3]/4;
		}else{
			ans[j]+=a[3]/4+1;
			a[2]-=(a[3]/4+1)*5;
			a[1]-=(a[3]/4+1)*7;
		}
		cout<<ans[j]<<endl;
		if(a[1]>0){
			if(a[1]%36==0){
				ans[j]+=a[1]/36;
			}else{
				ans[j]+=a[1]/36+1;
			}
		}
		if(a[2]>0){
			if(a[2]%9==0){
				ans[j]+=a[2]/9;
			}else{
				ans[j]+=a[2]/9+1;
			}
		}
	}
	for(int i=1;i<=j-1;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
