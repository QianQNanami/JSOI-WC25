#include<bits/stdc++.h>
#define int long long
const int N=10000000;
int n,i,j,s,l,m;
int a[N+5],ans[N+5];
using namespace std;
signed main(){
	while(true){
		l=0;
		for(i=1;i<=6;i++){
			cin>>a[i];
  			if(a[i]==0)l++;
		}
		if(l==6)break;
		int x=a[1]+4*a[2]+9*a[3]+16*a[4]+25*a[5]+36*a[6];
		m++;
		if(x%36==0)ans[m]=x/36;
		else ans[m]=x/36+1;
	}
	for(i=1;i<=m;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}                                                        
