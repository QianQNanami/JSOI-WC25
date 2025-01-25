#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a[200000+5],q,t,x,y,l;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>q;
	while(q--){
		cin>>t;
		if(t==2){
			cin>>x;
			a[x]=-1;	
		}
		if(t==1){
			cin>>x>>y;
			for(int i=1;i<=n;i++){
				if(a[i]==x){
					l=i;
					break;
				}
			}
			for(int j=l+2;j<=n+1;j++) a[j]=a[j-1];
			a[x]=y;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=-1) cout<<a[i]<<" ";
	}
	return 0;
}
