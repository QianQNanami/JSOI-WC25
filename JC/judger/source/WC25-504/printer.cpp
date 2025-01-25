#include<bits/stdc++.h>
using namespace std;
int q[10002];
int main(){
	int n,t,a,f,r,s=0,i,j;
	f=r=0;
	bool fl=1;
	cin>>n>>t;
	for(i=1;i<=n;i++){
		cin>>q[i];
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(q[i]<q[j]) {
				fl=0;
				q[f++]=q[++r];
			}
		}
		if(fl==1){
			f++;
		}
	}
	cout<<s<<endl;
	return 0;
}
