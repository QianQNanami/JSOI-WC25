#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,a[200010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		int x,y,k;
		cin>>k>>x;
		if(k==1){
			cin>>y;
			for(int i=1;i<=n;i++){
				if(a[i]==x){
					
				}
			}
		}
		if(k==2){
			for(int i=1;i<=n;i++){
				if(a[i]==x){
					
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}	
	return 0;
}
